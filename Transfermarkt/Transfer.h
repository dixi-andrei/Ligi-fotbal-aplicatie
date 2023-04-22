#ifndef TRANSFERMARKT_TRANSFER_H
#define TRANSFERMARKT_TRANSFER_H
#include <iostream>
#include <string>
#include "Stats_Jucator.h"
#include "Jucator.h"
#include "TransfermarktException.h"
#include "TransferException.h"

using namespace std;

class Transfer : public Jucator{
private:
    string buyer;
    string seller;
    int pret;

public:
    Transfer(string x = "", string y = "", int z = 0) : buyer(x), seller(y), pret(z){}

    void Confirmare_transfer(Jucator& jucator);

};


#endif //TRANSFERMARKT_TRANSFER_H
