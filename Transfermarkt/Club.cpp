#include "Club.h"
ostream& operator<<(ostream& os, const Club& c) {
    os << "Club - " << c.nume << ", Max_jucatori - " << c.max_jucatori << " , Liga - " << c.liga;
    return os;
}

istream& operator>>(istream& is, Club& c) {
    cout << "Introdu numele clubului: ";
    getline(cin >> ws, c.nume);
    cout << "Introdu numarul maxim de jucatori: ";
    is >> c.max_jucatori;
    cout << "Introdu numele ligii: ";
    getline(cin >> ws, c.liga);
    return is;
}

string Club::getLiga() const {
    return liga;
}

void Club::adaugaAntrenor(const Antrenor& a){
    antrenor = a;
}

void Club::adaugaJucator(const Jucator& jucator) {
    if (jucator.getClub() == nume) {
        if (jucatori.size() < max_jucatori) {
            jucatori.push_back(jucator);
       }
        else{
            throw TransfermarktException("Numarul maxim de jucatori din club a fost atins!");
        }
   }
}

//void Club::stergeJucator(const Jucator& jucator) {
//    jucatori.erase(remove(jucatori.begin(), jucatori.end(), jucator), jucatori.end());
//}

vector<Jucator>* Club::getJucatori() {
    return &jucatori;
}

Antrenor Club::getAntrenor() {
    return antrenor;
}


