#include <string>
#include <list>

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
Image* theImage;
AudioClip* theAudioClip;

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

    It is constructor's responsibility to catch exceptions to avoid memry leak
    
    */                
        theAddress(address),
        theImage(nullptr), 
        theAudioClip(nullptr)
{

    try{

    if(imageFileName !=""){
        theImage = new Image(imageFileName);
    }
    if(audioClipFileName != ""){
        theAudioClip = new AudioClip(audioClipFileName);// if here throw exception
        /* 
            ~BookEntry will not be called.


        theImage pointer will be leaked.
        
        
        
        
        
        */
    }
    }//try end
    catch(...){ // do cleaning .
        delete theImage;
        delete theAudioClip;
        throw;   // broadcast exception
    }

};

BookEntry::~BookEntry()
{
    delete theImage;
    delete theAudioClip;
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


