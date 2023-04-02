#include <iostream>
#include <string>

using namespace std;

class Jucator{
    private:
        string nume;
        int varsta;
        string club;
        double valoare;

    public:
        Jucator(string n="",int x=0,string p="",double v=0.0):nume(n),varsta(x),club(p),valoare(v){}

        string getNume();
        int getVarsta();
        string getClub();
        double getValoare();

        void cresteValoare();
        void scadeValoare();
        void setClub(string a="");
};

string Jucator::getNume(){
    return nume;
}

int Jucator::getVarsta(){
    return varsta;
}

string Jucator::getClub(){
    return club;
}

double Jucator::getValoare(){
    return valoare;
}

void Jucator::cresteValoare(){
    valoare = valoare * 2;
}

void Jucator::scadeValoare(){
    valoare = valoare / 2;
}

void Jucator::setClub(string a){
    club = a;
}

class Stats_Jucator{
    private:
        int goluri;
        int asisturi;
        Jucator jucator;
    public:
        Stats_Jucator(int x=0,int y=0,Jucator z = Jucator("",0,"",0.0)):goluri(x),asisturi(y),jucator(z){}

        void modifica_valoare();

        int getAsisturi();
        int getGoluri();
        int getValoare1();
};

int Stats_Jucator::getAsisturi(){
    return asisturi;
}

int Stats_Jucator::getGoluri(){
    return goluri;
}

void Stats_Jucator::modifica_valoare(){
    int v = jucator.getValoare();
        if(goluri + asisturi >= 10){
            jucator.cresteValoare();
            cout<<"Valoarea jucatorului "<<jucator.getNume()<<" a crescut de la "<<v<<" la "<<jucator.getValoare()<<endl; 
        }
        else{
            jucator.scadeValoare();
            cout<<"Valoarea jucatorului "<<jucator.getNume()<<" a scazut de la "<<v<<" la "<<jucator.getValoare()<<endl;
        }
}

int Stats_Jucator::getValoare1(){
    return jucator.getValoare();
}

class Transfer{
    private:
        string buyer;
        string seller;
        int pret;
        Jucator jucator;
        Stats_Jucator s; 

    public:
        Transfer(string x="",string y="", int z=0,Jucator j = Jucator("",0,"",0.0)):buyer(x),seller(y),pret(z),jucator(j){}

        void Confirmare_transfer();

        string getBuyer();
        string getSeller();
        int getPret();
        string getClub1();
};

string Transfer::getBuyer(){
    return buyer;
}

string Transfer::getSeller(){
    return seller;
}

int Transfer::getPret(){
    return pret;
}

void Transfer::Confirmare_transfer(){
    string a = buyer;
    if (pret >= jucator.getValoare()){
        jucator.setClub(buyer);
        cout<<"Jucatorul "<<jucator.getNume()<<" s-a transferat de la "<<seller<<" la "<<jucator.getClub()<<" pe suma de "<<pret<<endl;
    }
    else{
        cout<<"Transferul jucatorului "<<jucator.getNume()<<" la "<<buyer<<" nu s-a realizat din cauza sumei de transfer de "<<pret<<endl;
    }    
}

string Transfer::getClub1(){
    return jucator.getClub();
}

class Club{
    private:
        string nume;
        int max_jucatori;

    public:
        friend ostream& operator<<(ostream& os, const Club& c);
        friend istream& operator>>(istream& is, Club& c);

        string getNume();
        int getMax_jucatori();
};

ostream& operator<<(ostream& os, const Club& c) {
    os << "Club - " << c.nume << ", Max_jucatori - " << c.max_jucatori;
    return os;
}

istream& operator>>(istream& is, Club& c) {
    cout << "Introdu numele clubului: ";
    is >> c.nume;
    cout << "Introdu numarul maxim de jucatori: ";
    is >> c.max_jucatori;
    return is;
}

string Club::getNume(){
    return nume;
}

int Club::getMax_jucatori(){
    return max_jucatori;
}

class Transfermarkt{
    private:
        Club club;
        int nr_jucatori;
        Jucator *jucatori;

    public:
        Transfermarkt(Club c):club(c){
            nr_jucatori = 0;
            jucatori = new Jucator[club.getMax_jucatori()];
        }

        Transfermarkt(const Transfermarkt& t){
            nr_jucatori = t.nr_jucatori;
            jucatori = new Jucator[nr_jucatori];
            for (int i = 0; i < nr_jucatori; i++){
                jucatori[i] = t.jucatori[i];
            }
        }
        
        Transfermarkt& operator=(const Transfermarkt& t){
            if (this != &t){
                delete[] jucatori;
                nr_jucatori = t.nr_jucatori;
                jucatori = new Jucator[nr_jucatori];
                for (int i = 0 ; i < nr_jucatori; i++){
                    jucatori[i] = t.jucatori[i];
                }
            }
            return *this;
        }

        ~Transfermarkt(){
            delete []jucatori;
        }

        bool adauga_jucatori(Jucator j = Jucator("",0,"",0.0));
        
        Jucator& getJucatori();

};

bool Transfermarkt::adauga_jucatori(Jucator j){
    if (nr_jucatori == club.getMax_jucatori()) return false;

            if (j.getClub() == club.getNume()){
                jucatori[nr_jucatori++] = j;
                cout<<"Nume - "<<j.getNume()<<" | "<<"Varsta - "<<j.getVarsta()<<" | "<<"Valoare - "<<j.getValoare()<<endl;
                return true;
            }
            return true;
        }    

Jucator& Transfermarkt::getJucatori(){
    return *jucatori;
}
int main(){
    Jucator jucator1("Messi",36,"PSG",100);
    Jucator jucator2("Dembele",25,"Barcelona",50);
    Jucator jucator3("Lewandowski",33,"Barcelona",40);
    //Creez jucatorii

    Stats_Jucator stats1(30,20,jucator1);
    Stats_Jucator stats2(2,7,jucator2);
    Stats_Jucator stats3(21,4,jucator3);
    stats1.modifica_valoare();
    stats2.modifica_valoare();
    stats3.modifica_valoare();
    cout<<endl;
    jucator1 = Jucator("Messi",36,"PSG",stats1.getValoare1());
    jucator2 = Jucator("Dembele",25,"Barcelona",stats2.getValoare1());
    jucator3 = Jucator("Lewandowski",34,"Barcelona",stats3.getValoare1());
    //Adaug statistici jucatorilor si le modific valoare daca au cerintele necesare

    Transfer t1("Barcelona",jucator1.getClub(),300,jucator1);
    Transfer t2("PSG",jucator2.getClub(),20,jucator2);
    Transfer t3("Chelsea",jucator3.getClub(),50,jucator3);
    t1.Confirmare_transfer();
    t2.Confirmare_transfer();
    t3.Confirmare_transfer();
    cout<<endl;
    jucator1 = Jucator("Messi",36,t1.getClub1(),stats1.getValoare1());
    jucator2 = Jucator("Dembele",25,t2.getClub1(),stats2.getValoare1());
    jucator3 = Jucator("Lewandowski",25,t3.getClub1(),stats3.getValoare1());
    //Implementez clasa transfer si modific clubul jucatorilor daca transferul s-a realizat

    Club club;
    cin >> club;
    cout << club << endl;
    //Creez obiectul club in care citesc de la tastatura numele si nr maxim de jucatori si le afisez

    Transfermarkt t(club);
    t.adauga_jucatori(jucator1);
    t.adauga_jucatori(jucator2);
    t.adauga_jucatori(jucator3);
    //Creez transfermarkt-ul si adaug jucatorii intr-un vector alocat dinamic de obiecte tip jucator

    return 0;
}