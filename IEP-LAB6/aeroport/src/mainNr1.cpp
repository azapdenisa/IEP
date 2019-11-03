#include <stdio.h>
#include <iostream>
#include <string>
#include <list>
#include "aeroport.cpp"

using namespace std;

void stergeAvion(Aeroport* aeroport){

    int id;

    cout<<"Id= ";
    cin>>id;
    aeroport->stergeAvionByID(id);
};

void adaugaAvionMarfa(Aeroport* aeroport){

    int ida, idc;
    string cul;

    cout<<"Care e id-ul avionului?";
    cin>>ida;

    cout<<"Care e id-ul corpului?";
    cin>>idc;

    cout<<"Ce culoare are?";
    cin>>cul;

    Aripi *a1 = new Aripi(true);
    Corp *c1 = new Corp(idc);
    Motoare *m1 = new Motoare;

    Marfa *avionMarfa = new Marfa(ida,a1,m1,c1,cul);
    aeroport->adaugareAvionMarfa(avionMarfa);
   

};

void adaugaAvionPasageri(Aeroport* aeroport){

    int ida, idc, nrp;

    cout<<"Care e id-ul avionului?";
    cin>>ida;

    cout<<"Care e id-ul corpului?";
    cin>>idc;

    cout<<"Cati pasageri are?";
    cin>>nrp;

    Aripi *a1 = new Aripi(true);
    Corp *c1 = new Corp(idc);
    Motoare *m1 = new Motoare;

    Pasageri *avionPas = new Pasageri(ida,a1,m1,c1,nrp);
    aeroport->adaugareAvionPasageri(avionPas);
   
};

void fswitch(Aeroport* aeroport){

    int id,nr, dorn;

    cout<<"ALegeti una dintre operatiile de mai sus: ";
    cin>>nr;

     switch(nr){
        case 1: aeroport->afisareAvioane();
            break;
        case 2: adaugaAvionMarfa(aeroport);
            break;
        case 3: adaugaAvionPasageri(aeroport);
            break;
        case 4: stergeAvion(aeroport);
            break;
        // case 5: disponibilitateAvion();
        //     break;
        // case 6: indisponibilizareAvion();
        //     break;
    };

    cout<<"Alegeti alt numar? (da=1/nu=0)";
    cin>>dorn;

    if(dorn==1) fswitch(aeroport);
    
};

int main() {

    Aeroport* aeroport = new Aeroport;
    
    Aripi *a = new Aripi(true);
    Motoare *m = new Motoare;
    Corp *c = new Corp(15);

    Marfa *avionMarfa = new Marfa(1,a,m,c,"gri");
	Pasageri *avionPas = new Pasageri(2,a,m,c,300);
	
    aeroport->adaugareAvionMarfa(avionMarfa);
    aeroport->adaugareAvionPasageri(avionPas);

    cout<<"1. vizualizare avioane\n";
    cout<<"2. adaugare avion marfa\n";
    cout<<"3. adaugare avion pasageri\n";
    cout<<"4. stergere avion, dupa id\n";
    // cout<<"5. disponibilitate avion\n";
    // cout<<"6. indisponibilizare avion\n";

    fswitch(aeroport);

    return 0;
};

