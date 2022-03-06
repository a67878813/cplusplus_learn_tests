#include <iostream>

class DBconnection{

};
class DBConn{
public:
    void close(){
        db.close();
        close = true;

    };
    ~DBConn(){
        if (!closed){
            try{
                db.close();

            }
            catch(){
                // log
            }
        }
    }
private:
    DBconnection db;
    bool closed;
};