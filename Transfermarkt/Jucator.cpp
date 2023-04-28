#include "Jucator.h"

string Jucator::getClub() const{
    return club;
}

double Jucator::getValoare(){
    return valoare;
}

void Jucator::setClub(string c){
    club = c;
}

void Jucator::setValoare(double v) {
    valoare = v;
}

bool Jucator::operator==(const Jucator &j) const {
    return nume == j.nume && varsta == j.varsta && valoare == j.valoare && club == j.getClub();
}

void Jucator::afiseazaJucator() {
    Persoana::afiseazaPrenume();
    Persoana::afiseazaNume();
    Persoana::afiseazaVarsta();
}

void Jucator::afiseazaDetaliiPersoanaSpecifice() const {
    cout<<" | Valoare - "<<valoare<<endl;
}
