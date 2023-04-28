#include "Transfer.h"

void Transfer::Confirmare_transfer(Jucator &jucator) {
    try {
        if (pret >= jucator.getValoare()) {
            jucator.setClub(buyer);
        } else {
            throw TransfermarktException("Nu s-a putut confirma transferul.");
        }
    } catch (TransfermarktException& e) {
        cout << "Eroare (Transfer): " << e.what() << "\n";
        throw TransferException("A aparut o eroare la pretul transferului.");
    }
}

