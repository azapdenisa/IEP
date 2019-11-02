#include <stdio.h>
#include <iostream>
#include <string>
#include <list>
#include "avion/src/avion.cpp"

using namespace std;

void printComponente(list<Componenta*> lista)
{
    int nra=0, nrc=0, nrm=0;

	std::list<Componenta*>::iterator it;
	for (it = lista.begin(); it != lista.end(); ++it)
	{
		if ((*it)->isAripi()) nra++;
        else if((*it)->isCorp()) nrc++;
            else nrm++;
	}

    cout<<"Aripi: "<<nra<<endl;
    cout<<"Corp: "<<nrc<<endl;
    cout<<"Motoare: "<<nrm<<endl;
}

void printAvioane(list<Avion*> lista)
{
	std::list<Avion*>::iterator it;
	for (it = lista.begin(); it != lista.end(); ++it)
	{
		(*it)->print();
	}
}

void creeazaAvion(list<Avion*> lista){

    bool torf1, torf2;
    int ida, idc, nrp;
    string cul;

    cout<<"Care e id-ul avionului?";
    cin>>ida;

    cout<<"Sunt ok aripile? (true=1/false=0) ";
    cin>>torf1;

    cout<<"Care e id-ul corpului?";
    cin>>idc;

    cout<<"Avionul este de marfa?";
    cin>>torf2;
    cout<<endl;

    Aripi *a1 = new Aripi(torf1);
    Corp *c1 = new Corp(idc);
    Motoare *m1 = new Motoare;

    if(torf2==true) {
        cout<<"Ce culoare are?";
        cin>>cul;
        cout<<endl;
        Marfa *avionMarfa1 = new Marfa(ida,a1,m1,c1,cul);
        lista.push_back(avionMarfa1);
    }
    else {
        cout<<"Ce nr de pasageri are?";
        cin>>nrp;
        cout<<endl;
        Pasageri *avionPas1 = new Pasageri(ida,a1,m1,c1,nrp);
        lista.push_back(avionPas1);
    }

};

int main()
{
    int nr;
	list<Componenta*> listaComponente;
    list<Avion*> listaAvioane;

    Aripi *a1 = new Aripi(true);
    Aripi *a2 = new Aripi(false);
    Aripi *a3 = new Aripi(true);
    Motoare *m1 = new Motoare;
    Motoare *m2 = new Motoare;
    Corp *c1 = new Corp(15);
    Corp *c2 = new Corp(20);
    Corp *c3 = new Corp(25);
    Corp *c4 = new Corp(30);

    
     Marfa *avionMarfa1 = new Marfa(1,a1,m1,c1,"gri");
	 Pasageri *avionPas1 = new Pasageri(2,a2,m2,c2,300);
     Marfa *avionMarfa2 = new Marfa(3,a3,m1,c3,"alb");
	 Pasageri *avionPas2 = new Pasageri(4,a1,m2,c4,400);

    listaComponente.push_back(a1);
    listaComponente.push_back(a2);
    listaComponente.push_back(a3);
    listaComponente.push_back(m1);
    listaComponente.push_back(m2);
    listaComponente.push_back(c1);
    listaComponente.push_back(c2);
    listaComponente.push_back(c3);
    listaComponente.push_back(c4);

    listaAvioane.push_back(avionMarfa1);
    listaAvioane.push_back(avionPas1);
    listaAvioane.push_back(avionMarfa2);
    listaAvioane.push_back(avionPas2);
	
    cout<<"1. afisare nr componente\n";
    cout<<"2. creare avion\n";
    cout<<"3. vizualizare avioane\n";

    cout<<"ALegeti una dintre operatiile de mai sus: ";
    cin>>nr;

    switch(nr){
        case 1: printComponente(listaComponente);
            break;
        case 2: creeazaAvion(listaAvioane);
            break;
        case 3: printAvioane(listaAvioane);
            break;
    };


	return 0;
}