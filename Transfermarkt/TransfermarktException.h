#ifndef TRANSFERMARKT_TRANSFERMARKTEXCEPTION_H
#define TRANSFERMARKT_TRANSFERMARKTEXCEPTION_H
#include <iostream>
#include <string>
#include <exception>
#include <utility>

using namespace std;

class TransfermarktException : exception {
private:
    string msg;
public:
    TransfermarktException(string mesaj) : msg(mesaj){}
    const char* what() const throw() override{
        return msg.c_str();
    }
};



#endif //TRANSFERMARKT_TRANSFERMARKTEXCEPTION_H
