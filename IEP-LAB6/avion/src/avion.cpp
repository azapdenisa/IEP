#include <stdio.h>
#include <iostream>
#include <string.h>
#include <list>
// #include <inc/avion.hpp>

using namespace std;

class Componenta {

    virtual void printComponenta(){
        cout<<"Componenta\n";
    };

};

class Aripi:public Componenta {

    private:
        bool zboara;

    public:

        Aripi(bool zboara) {
            this->zboara=zboara;
        };

        void poateZbura() {
            if (zboara==true) cout<<"zboara\n";
            else cout <<"nu zboara\n";
        };

        void printComponenta() {
            cout<<"aripi\n";
        };

        bool isAripi(){
            return true;
        };

};

class Motoare:public Componenta {

    private:
        int km;

    public:

        void setKm(int km){
            this->km=km;
        };

        int getKm(){
            return km;
        };

        void incrementareKm(int nr){
            km=km+nr;
        };

        void printComponenta() {
            cout<<"motoare\n";
        };

        bool isMotoare(){
            return true;
        };
};

class Corp:public Componenta {

    private:
        int id;

    public:

        Corp(int id){
            this->id=id;
        };

        int getId(){
            return id;
        };

        void printComponenta() {
            cout<<"corp\n";
        };

        bool isCorp(){
            return true;
        };
};

class Avion{

    protected:
        Aripi* a;
        Motoare* m;
        Corp* c;

    public:

        Avion(Aripi* a, Motoare* m, Corp* c){
            this->a = a;
            this->m = m;
            this->c = c;
        };

        void esteFunctional(){
            if (a->isAripi() && m->isMotoare() && c->isCorp())
                cout<<"Este functional\n";
        };

        virtual void print();

};

class Marfa:public Avion{

    private:
        string culoare;

    public:
        Marfa(Aripi* a, Motoare* m, Corp* c, string culoare):Avion(a,m,c){
            this->culoare=culoare;
        };

        void print(){
            cout<<"Avion de marfa - culoare: "<<this->culoare<<endl;
        };
};

class Pasageri:public Avion {

    private:
        int nrPasageri;

    public:
        Pasageri(Aripi* a, Motoare* m, Corp* c, int nrPasageri):Avion(a,m,c){
            this->nrPasageri=nrPasageri;
        };

        void print(){
            cout<<"Avion de pasageri - capacitate: "<<this->nrPasageri<<endl;
        };
};

// int main(){

//     Aripi *a = new Aripi(true);
//     Motoare *m = new Motoare;
//     Corp *c = new Corp(15);

//     Marfa *avionMarfa = new Marfa(a,m,c,"gri");
//     avionMarfa->print();

//     Pasageri *avionPas = new Pasageri(a,m,c,300);
//     avionPas->print();

//     return 0;

// };
