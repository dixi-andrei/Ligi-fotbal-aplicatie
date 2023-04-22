#include "Liga.h"

void Liga::adaugaClub(const Club &club) {
    if(club.getLiga() == nume){
        if(cluburi.size() < max_cluburi){
            cluburi.push_back(club);
        }
        else{
            throw TransfermarktException("Numarul maxim de cluburi din liga a fost atins!");
        }
    }
}

//void Club::stergeClub(const Club& club) {
//    cluburi.erase(remove(cluburi.begin(), cluburi.end(), club), cluburi.end());
//}

vector<Club>* Liga::getCluburi() {
    return &cluburi;
}
int Liga::nr_ligi=0;

int Liga::getNrLigi() {
    return nr_ligi;
}

void Liga::IncrementNrLigi() {
    nr_ligi++;
}