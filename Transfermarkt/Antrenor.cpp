#include "Antrenor.h"

void Antrenor::afiseazaAntrenor() {
    cout<<"Antrenor - ";
    Persoana::afiseazaPrenume();
    Persoana::afiseazaNume();
    Persoana::afiseazaVarsta();
}

void Antrenor::afiseazaDetaliiPersoanaSpecifice() const {
    cout<<" | Formatie - "<<formatie<<endl;
}
