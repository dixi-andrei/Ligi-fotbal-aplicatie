#ifndef TRANSFERMARKT_IPERSOANA_H
#define TRANSFERMARKT_IPERSOANA_H
#include <iostream>

using namespace std;

class IPersoana {
public:
    virtual void afiseazaNume() = 0;
    virtual void afiseazaPrenume() = 0;
    virtual void afiseazaVarsta() = 0 ;
    virtual ~IPersoana() {}
};


#endif //TRANSFERMARKT_IPERSOANA_H
