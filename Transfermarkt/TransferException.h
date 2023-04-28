#ifndef TRANSFERMARKT_TRANSFEREXCEPTION_H
#define TRANSFERMARKT_TRANSFEREXCEPTION_H
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class TransferException : exception {
private:
    string msg;
public:
    TransferException(string m) : msg(m) {}
    const char* what() const throw() {
        return msg.c_str();
    }
};


#endif //TRANSFERMARKT_TRANSFEREXCEPTION_H
