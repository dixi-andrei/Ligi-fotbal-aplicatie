#ifndef TRANSFERMARKT_LIGA_H
#define TRANSFERMARKT_LIGA_H
#include <iostream>
#include <string>
#include <vector>
#include "Club.h"
#include "TransfermarktException.h"

using namespace std;

class Liga : public Club{
private:
    string nume;
    int max_cluburi;
    vector<Club> cluburi;
    static int nr_ligi;
public:
    Liga(string n, int x) : nume(n) , max_cluburi(x){}

    void adaugaClub(const Club& club);
    //void stergeClub(const Club& club);
    vector<Club>* getCluburi();

    static int getNrLigi();
    static void IncrementNrLigi();
};


#endif //TRANSFERMARKT_LIGA_H
