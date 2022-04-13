#include <string>
#include <list>
#include <memory>

class Image{
    public:
    Image(const std::string& imageDataFileName);
};


class AudioClip{
    public:
    AudioClip( const std::string& audioDataFileName);

};

class PhoneNumber {};

class BookEntry{
public:
BookEntry(
        const std::string& name,
        const std::string& address ="",
        const std::string& imageFileName = "",
        const std::string& audioClipFileName = ""
        );
~BookEntry();

void addPhoneNumber (const PhoneNumber& number);

private:

std::string theName;
std::string theAddress;
std::list<PhoneNumber > thePhones;
const Image* theImage;
const AudioClip* theAudioClip;
void cleanup(); // conmmon (clean up)
Image* initImage(const std::string& imageFileName);
AudioClip* initAuioClip(const std::string& audioClipFileName);
//this methord will distribute ctor's function to some funcs that could be disturb maintainer.

// or =========  this will avoid mem_leak
std::shared_ptr<Image> _theImage; 
std::shared_ptr<AudioClip> _theAudioClip; //constructed  means automatic destructed.
};

BookEntry::BookEntry( 
        const std::string& name,
        const std::string& address,
        const std::string& imageFileName,
        const std::string& audioClipFileName
        )
    : theName(name),                
    /* 
    there is no need to worry for non-pointer data members.
    here we use "member initialization list",
    datamenbrer will be c'tored before BookEntry's ctor.
    when BookEntry 's c'tor throw exception , data members will be d'tor automatically.

    It is constructor's responsibility that catch exceptions to avoid memry leak
    
    */                
    theAddress(address),
        // theImage(nullptr), 
        // theAudioClip(nullptr)
        /* theImage( imageFileName != ""
                ? new Image(imageFileName)
                :0),
        theAudioClip(audioClipFileName != ""
                ? new AudioClip(audioClipFileName)
                : 0)
 */
    theImage(initImage(imageFileName)),
    theAudioClip(initAuioClip(audioClipFileName))
{

    try{

        // if(imageFileName !=""){
        //     theImage = new Image(imageFileName);
        // }
        // if(audioClipFileName != ""){
        //     theAudioClip = new AudioClip(audioClipFileName);// if here throw exception
        //     /* 
        //         ~BookEntry will not be called.


        //     theImage pointer will be leaked.
            
            
            
            
            
        //     */
        // }
    }//try end
    catch(...){ // do cleaning .
        // delete theImage;
        // delete theAudioClip;
        cleanup(); //release resources
        throw;   // broadcast exception
    }

};

BookEntry::~BookEntry()
{
    // delete theImage;
    // delete theAudioClip;
    cleanup();

    // if use std::shared_ptr<Image> _theImage; 
// std::shared_ptr<AudioClip> _theAudioClip; //constructed  means automatic destructed.
    //~() have not to do anything.
}

void BookEntry::cleanup(){
    delete theImage;
    delete theAudioClip;
}

// first init obj will not leak memory
Image* BookEntry::initImage(const std::string& imageFileName)
{
    if( imageFileName != "")  return new Image(imageFileName);
    else return 0;
}

// second  init obj, will delete first obj, if throw exception.
AudioClip* BookEntry::initAuioClip(const std::string& audioClipFileName)
{
    try{
        if (audioClipFileName != ""){
            return new AudioClip(audioClipFileName);
        }
        else return 0;

    }
    catch(...){
        delete theImage;
        throw;

    }
}






void testBookEntryClass()
{
    BookEntry b("Addison-Wesley", "One Jacob Way , Reading , MA 01867") ; 
}

void testBookEntryClass2()
{
    BookEntry *pb = 0;
    try{
        pb = new BookEntry("Addison-Wesley", "One Jacob Way , Reading , MA 01867") ; 
        // if BookEntry() make exception , pb will be nullptr, catch will not work correctly.

    }
    catch(...){   // catch all exceptions
        delete pb; 
        throw; // throw exception to caller
    }
    delete pb; // normol condition

}


