

// stack-unwinding

class Session{
public:
    Session();
    ~Session();

private:
    static void logCreation(Session* objAddr);
    static void logDestruction( Session*  objAddr) noexcept;


};


// Session::~Session(){
//     logDestruction(this);
// }

Session::Session(){
logCreation(this);
startTransaction(); // begin database
}

Session::~Session(){
    logDestruction(this); 
    /* 
    if throw exception ;
    bewlows will not be call.

    */
    endTransaction(); // end database
}
