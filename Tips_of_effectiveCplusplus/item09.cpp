#include <iostream>
#include <string>

class Transaction{
public:
    explicit Transaction(const std::string& logInfo);
    void logTransaction(const std::string& logInfo) const;
};

Transaction::Transaction(const std::string& logInfo){
    logTransaction(logInfo);
}

class BuyTransaction: public Transaction {
public:
    BuyTransaction(parameters)
        :Transaction(createLogString(parameters)){};
private:
    static std::string createLogString(parameters);
};
