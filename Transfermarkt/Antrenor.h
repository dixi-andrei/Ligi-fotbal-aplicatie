#ifndef TRANSFERMARKT_ANTRENOR_H
#define TRANSFERMARKT_ANTRENOR_H
#include <iostream>
#include <string>
#include "Persoana.h"


class Antrenor : public Persoana{
private:
    string formatie;
public:
    Antrenor(string n="",string m="",int v=0,string f=""){
        this->nume = n;
        this->prenume = m;
        this->varsta = v;
        this->formatie = f;
    }

    void afiseazaDetaliiPersoanaSpecifice() const override;
    void afiseazaAntrenor();

    virtual ~Antrenor(){}
};


#endif //TRANSFERMARKT_ANTRENOR_H
