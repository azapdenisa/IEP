#include <stdio.h>
#include <iostream>
#include <string.h>
#include <list>

using namespace std;

class Componenta {

    virtual void printComponenta();

};

class Aripi:public Componenta {

    private:
        bool zboara;

    public:

        Aripi();

        Aripi(bool zboara);

        void poateZbura();

        void printComponenta();

        bool isAripi();

};

class Motoare:public Componenta {
    
    private:
        int km;
        
    public:

        Motoare();

        void setKm(int km);

        int getKm();

        void incrementareKm(int nr);

        void printComponenta();

        bool isMotoare();
};

class Corp:public Componenta {
    
    private:
        int id;

    public:

        Corp();

        int getId();

        void printComponenta();

        bool isCorp();
};

class Avion{

    protected:
        Aripi a;
        Motoare m;
        Corp c;

    public:
        Avion();

        Avion(Aripi a, Motoare m, Corp c);

        void esteFunctional();

};

class Marfa:public Avion{

    private:
        string culoare;

    public:
        Marfa(Aripi a, Motoare m, Corp c, string culoare);
};

class Pasageri:public Avion {

    private:
        int nrPasageri;

    public:
        Pasageri(Aripi a, Motoare m, Corp c, int nrPasageri);
};
