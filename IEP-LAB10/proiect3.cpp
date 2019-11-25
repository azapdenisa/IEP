#include <stdio.h>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <cmath>

using namespace std;

class Punct {

    private:
        int x, y;

    public:
        Punct(int x, int y){
            this->x=x;
            this->y=y;
        };

        ~Punct(){
            cout<<"Punctul este distrus";
        };

        int getX(){
            return x;
        };

        int getY(){
            return y;
        };
};

class Figura {

    public:
        virtual float perimetru(){};

};

class Patrat: public Figura {

    private:
        vector<Punct*> puncte;

    public:

        Patrat(vector<Punct*> puncte){
            this->puncte=puncte;
        };

        float perimetru(){
            
            float P=0;

            P=4 * ( sqrt( ((puncte[1]->getX()-puncte[0]->getX()) * (puncte[1]->getX()-puncte[0]->getX())) + ((puncte[1]->getY()-puncte[0]->getY()) * (puncte[1]->getY()-puncte[0]->getY())) ) );

            return P;
        };

        vector<Punct*> getPuncte() {
            return puncte;
        };

};

class Triunghi: public Figura {

    private:
        vector<Punct*> puncte;

    public:

        Triunghi(vector<Punct*> puncte){
            this->puncte=puncte;
        };

        float perimetru(){
            
            float P=0;

            P=sqrt( ((puncte[1]->getX()-puncte[0]->getX()) * (puncte[1]->getX()-puncte[0]->getX())) + ((puncte[1]->getY()-puncte[0]->getY()) * (puncte[1]->getY()-puncte[0]->getY())) ) + 
                sqrt( ((puncte[2]->getX()-puncte[1]->getX()) * (puncte[2]->getX()-puncte[1]->getX())) + ((puncte[2]->getY()-puncte[1]->getY()) * (puncte[2]->getY()-puncte[1]->getY())) ) +
                sqrt( ((puncte[0]->getX()-puncte[2]->getX()) * (puncte[0]->getX()-puncte[2]->getX())) + ((puncte[0]->getY()-puncte[2]->getY()) * (puncte[0]->getY()-puncte[2]->getY())) );

            return P;
        };

        vector<Punct*> getPuncte() {
            return puncte;
        };
};

template <class T>
float pantaDreptei(T& figura){

    float panta;
    vector<Punct*> puncte;
    puncte=figura->getPuncte();

    panta=(puncte[2]->getY()-puncte[0]->getY())/(puncte[2]->getX()-puncte[0]->getX());
    return panta;
};

int main(){

    Punct *A = new Punct(1,1);
    Punct *B = new Punct(1,2);
    Punct *C = new Punct(2,2);
    Punct *D = new Punct(2,1);

    vector<Punct*> puncte;
    puncte.push_back(A);
    puncte.push_back(B);
    puncte.push_back(C);
    puncte.push_back(D);

    Patrat *patrat = new Patrat(puncte);
    cout<<"Perimetrul patratului: "<<patrat->perimetru()<<endl;

    vector<Punct*> puncte2;
    puncte2.push_back(A);
    puncte2.push_back(B);
    puncte2.push_back(C);
    Triunghi *triunghi = new Triunghi(puncte2);
    cout<<"Perimetrul triunghiului: "<<triunghi->perimetru()<<endl;

    cout<<"Panta patratului: "<<pantaDreptei(patrat)<<endl;
    return 0;
}