#include <stdio.h>
#include <iostream>
#include <string.h>
#include <list>
#include "../inc/aeroport.hpp"
#include "../../avion/src/avion.cpp"

using namespace std;

class Aeroport {

    private:
        list<Avion> avioane;

    public:

    void afisareAvioane(){
	    
        if (avioane.empty()) cout<<"Lista este goala\n";

        else {

        list<Avion*>::iterator it;
	    for (it = avioane.begin(); it != avioane.end(); ++it){
		(*it)->print();

        }
	};
};

