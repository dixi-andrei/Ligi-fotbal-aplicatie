#ifndef TRANSFERMARKT_STATS_JUCATOR_H
#define TRANSFERMARKT_STATS_JUCATOR_H
#include <iostream>
#include <string>
#include "Jucator.h"
#include "TransfermarktException.h"

using namespace std;

class Stats_Jucator: public Jucator {
private:
    int goluri;
    int asisturi;
public:
    Stats_Jucator(string n = "",string m="", int x = 0,string p = "",double v = 0.0,int z=0,int y=0) : Jucator(n,m,x,p,v) ,goluri(z),asisturi(y){}

    void modifica_valoare(Jucator& jucator);

    int getAsisturi();
    int getGoluri();
};


#endif //TRANSFERMARKT_STATS_JUCATOR_H
