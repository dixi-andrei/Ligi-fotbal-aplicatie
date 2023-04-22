#include <iostream>
#include "Jucator.h"
#include "Antrenor.h"
#include "Stats_Jucator.h"
#include "Transfer.h"
#include "Club.h"
#include "Liga.h"
#include "TransfermarktException.h"

using namespace std;

int main() {
    //IPersoana *antrenor1 = new Antrenor("Xavi","Hernandez",44,"4-3-3");

    Jucator jucator1("Messi", "Lionel", 35, "Barcelona", 100);
    Jucator jucator2("Dembele", "Ousmane", 25, "Barcelona", 50);
    Jucator jucator3("Lewandowski", "Robert", 33, "Barcelona", 40);
    //Creez jucatorii

    Antrenor antrenor1("Xavi", "Hernandez", 44, "4-3-3");
    //Creez antrenorii

    Stats_Jucator stats1("Messi", "Lionel", 36, "PSG", 100, 30, 20);
    Stats_Jucator stats2("Dembele", "Ousmane", 25, "Barcelona", 50, 2, 7);
    Stats_Jucator stats3("Lewandowski", "Robert", 33, "Barcelona", 40, 21, 4);

    //Adaug statistici jucatorilor

    stats1.modifica_valoare(jucator1);
    stats2.modifica_valoare(jucator2);
    stats3.modifica_valoare(jucator3);
    //Modific valoarea jucatorlui in functie de statisticile jucatorului

    Transfer t1("Barcelona", jucator1.getClub(), 500);
    Transfer t2("PSG", jucator2.getClub(), 20);
    Transfer t3("Chelsea", jucator3.getClub(), 45);
    //Implementez transferurile jucatorilor

    try {
        t1.Confirmare_transfer(jucator1);
        //t2.Confirmare_transfer(jucator2);
        //t3.Confirmare_transfer(jucator3);
    } catch (TransferException &e) {
        cout << "Eroare (Transfermarkt): " << e.what() << "\n";
        throw TransferException("A aparut o eroare la transferul jucatorului.");
    }
    //Transfer jucatorii (le modific clubul) daca oferta este mai mare sau egala decat valorea jucatorului

    Club club1;
    cin >> club1;
    cout << endl;
    cout << club1 << endl;
    //Creez obiectul club in care citesc de la tastatura numele si nr maxim de jucatori si le afisez


    try {
        club1.adaugaJucator(jucator1);
        club1.adaugaJucator(jucator2);
        club1.adaugaJucator(jucator3);
        club1.adaugaAntrenor(antrenor1);
    }catch (TransfermarktException& e){
        cout<< "Eroare (Club): "<<e.what() <<"\n";
    }
    //Adaug jucatorii si antrenorul in club


    Liga liga1("La Liga", 18);
    Liga::IncrementNrLigi();
    try {
        liga1.adaugaClub(club1);
    }catch (TransfermarktException& e){
        cout <<"Eroare (Liga): "<<e.what()<<"\n";
    }
    //Creez liga si adaug cluburile

    vector<Club> *cluburi = liga1.getCluburi();
        for (auto & i : *cluburi) {
            vector<Jucator> *jucatoriClub = i.getJucatori();
            i.getAntrenor().afiseazaAntrenor();
            i.getAntrenor().afiseazaDetaliiPersoanaSpecifice();
            for (auto & j : *jucatoriClub) {
                j.afiseazaJucator();
               j.afiseazaDetaliiPersoanaSpecifice();
            }
    }

}





