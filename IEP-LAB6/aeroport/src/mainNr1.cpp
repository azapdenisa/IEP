#include <stdio.h>
#include <iostream>
#include <string.h>
#include <list>
#include "aeroport.cpp"

using namespace std;

int main() {
    int nr;

    Aeroport* aeroport = new Aeroport;

    cout<<"1. vizualizare avioane\n";
    cout<<"2. adaugare avion marfa\n";
    cout<<"3. adaugare avion pasageri\n";
    cout<<"4. stergere avion, dupa id\n";
    cout<<"5. disponibilitate avion\n";
    cout<<"6. indisponibilizare avion\n";

    cout<<"ALegeti una dintre operatiile de mai sus: ";
    cin>>nr;

    switch(nr){
        case 1: aeroport->afisareAvioane();
            break;
        // case 2: adaugareAvionMarfa();
        //     break;
        // case 3: adaugareAvionPasageri();
        //     break;
        // case 4:  stergeAvionByID(int id);
        //     break;
        // case 5: disponibilitateAvion();
        //     break;
        // case 6: indisponibilizareAvion();
        //     break;
    };
    

    return 0;
};