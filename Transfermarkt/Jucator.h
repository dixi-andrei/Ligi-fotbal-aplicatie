#ifndef TRANSFERMARKT_JUCATOR_H
#define TRANSFERMARKT_JUCATOR_H
#include <iostream>
#include <string>
#include <typeinfo>
#include "Persoana.h"

using namespace std;

class Jucator : public Persoana{
private:
    string club;
    double valoare;

public:
    Jucator(string n="",string m="",int x = 0,string p = "",double v = 0.0){
        this->nume = n;
        this->prenume = m;
        this->varsta = x;
        this->club = p;
        this->valoare = v;
    }

    void afiseazaDetaliiPersoanaSpecifice() const override;
    void afiseazaJucator();


    string getClub() const;
    double getValoare();

    bool operator==(const Jucator& j) const;

    void setValoare(double v = 0.0);
    void setClub(string c = "");

    virtual ~Jucator() {}
};


#endif //TRANSFERMARKT_JUCATOR_H
