#include <stdio.h>
#include <iostream>
#include <string.h>
#include <list>

using namespace std;

class Componenta {

    void printComponenta();

};

class Aripi:public Componenta {

    private:
        bool zboara;

    public:

        Aripi();

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

        Motoare();

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

        Corp();

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
        Aripi a;
        Motoare m;
        Corp c;

    public:
        Avion();

        Avion(Aripi a, Motoare m, Corp c){
            this->a = a;
            this->m = m;
            this->c = c;
        };

        void esteFunctional(){
            if (a.isAripi() && m.isMotoare() && c.isCorp())
                cout<<"Este functional\n";
        };

};

class Marfa:public Avion{

    private:
        string culoare;

    public:
        Marfa(Aripi a, Motoare m, Corp c, string culoare){
            this->a = a;
            this->m = m;
            this->c = c;
            this->culoare=culoare;
        };
};

class Pasageri:public Avion {

    private:
        int nrPasageri;

    public:
        Pasageri(Aripi a, Motoare m, Corp c, int nrPasageri) {
            this->a = a;
            this->m = m;
            this->c = c;
            this->nrPasageri=nrPasageri;
        };
};

class Aeroport {

    private:
        list<Avion> a;
};



int main(){
    Aripi a(true);
    a.printComponenta();


};