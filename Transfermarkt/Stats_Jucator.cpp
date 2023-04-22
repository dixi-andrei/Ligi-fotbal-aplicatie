#include "Stats_Jucator.h"

int Stats_Jucator::getAsisturi(){
    return asisturi;
}

int Stats_Jucator::getGoluri(){
    return goluri;
}

void Stats_Jucator::modifica_valoare(Jucator &jucator) {
    double val = jucator.getValoare();
    val = val * (static_cast<double>(getAsisturi() + getGoluri())/10);
    jucator.setValoare(val);
    if (jucator.getValoare() < 0){
        throw TransfermarktException("Valoarea jucatorului nu poate fi un numar negativ!");
    }
}
