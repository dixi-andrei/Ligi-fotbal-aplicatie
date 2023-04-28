#ifndef TRANSFERMARKT_KIT_H
#define TRANSFERMARKT_KIT_H
#include <iostream>
#include "Ikit.h"

using namespace std;

class Kit : public Ikit {
private:
    string culoarePrimara;
    string culoareSecundara;

public:
    Kit(string n, string m) : culoarePrimara(n), culoareSecundara(m){}
    virtual void afisareculori() override;

    virtual ~Kit(){}
};


#endif //TRANSFERMARKT_KIT_H
