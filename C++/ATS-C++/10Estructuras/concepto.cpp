#include <iostream> 

using namespace std;

//Declarar una estructura
struct coleccion_CD{
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];
} CD1, CD2, CD3; //Declarar variables de tipo struct fuera del main

int main(){
    //Declarar variables de tipo struct dentro del main
    struct coleccion_CD CD1, CD2, CD3;

    return 0;
}