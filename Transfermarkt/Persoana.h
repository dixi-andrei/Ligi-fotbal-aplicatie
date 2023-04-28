#ifndef TRANSFERMARKT_PERSOANA_H
#define TRANSFERMARKT_PERSOANA_H
#include <iostream>
#include <string>
#include "IPersoana.h"

using namespace std;

class Persoana : public IPersoana{
protected:
    string nume;
    string prenume;
    int varsta;

    void afiseazaNume() override;
    void afiseazaPrenume() override;
    void afiseazaVarsta() override;
    ~Persoana() {};


public:

    virtual void afiseazaDetaliiPersoanaSpecifice() const = 0;
};


#endif //TRANSFERMARKT_PERSOANA_H
