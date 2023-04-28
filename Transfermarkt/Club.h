#ifndef TRANSFERMARKT_CLUB_H
#define TRANSFERMARKT_CLUB_H
#include <iostream>
#include <string>
#include <vector>
#include "Jucator.h"
#include "Antrenor.h"
#include "Kit.h"
#include "TransfermarktException.h"

using namespace std;

class Club : public Jucator, public Antrenor{
private:
    string nume;
    string liga;
    int max_jucatori;
    vector<Jucator> jucatori;
    Antrenor antrenor;

public:


    void adaugaAntrenor(const Antrenor& a);
    void adaugaJucator(const Jucator& jucator);
    //void stergeJucator(const Jucator& jucator);
    vector<Jucator>* getJucatori();
    Antrenor getAntrenor();

    friend ostream& operator<<(ostream& os, const Club& c);
    friend istream& operator>>(istream& is, Club& c);

    string getLiga() const;

    Club();
};


#endif //TRANSFERMARKT_CLUB_H
