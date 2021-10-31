#include <iostream>

using namespace std;

#pragma once;

class Nodo{
    public:
        Nodo(int);
        Nodo(int, Nodo*);
        ~Nodo();
        int getDato();
        Nodo* getSig();
        void setDato(int);
        void setSig(Nodo*);
    private:
        int dato;
        Nodo* sig;
};

Nodo::Nodo(int d){
    dato = d;
    sig = NULL;
}

Nodo::Nodo(int d, Nodo *s){
    dato = d;
    sig = s;
}

Nodo::~Nodo(){ }

int Nodo::getDato(){
    return dato;
}

Nodo* Nodo::getSig(){
    return sig;
}

void Nodo::setDato(int d){
    dato = d;
}

void Nodo::setSig(Nodo *s){
    sig = s;
}