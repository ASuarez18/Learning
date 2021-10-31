#include <iostream> 
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
} persona1, persona2 //Declaracion sin parametros
/*
Declaraciones con parametros
persona1 = {"Alejandro", 18},
persona2 = {"Cesar", 53}*/
;

int main(){
    /*
    Acceder a las variables para impresion

    cout << "Nombre 1: " << persona1.nombre << endl;
    cout << "Edad 1: " << persona1.edad << endl;

    cout << "\nNombre 2: " << persona2.nombre << endl;
    cout << "Edad 2: " << persona2.edad << endl;
    */
   //Obtencion y llenado de variables
   cout << "Ingrese el nombre de persona 1: ";
   cin.getline(persona1.nombre, 20,'\n');
   cout << "Ingrese edad de persona 1: " :
   cin >> persona1.edad;

   cout << "\nImpresion de datos" << endl;
   cout << "Nombre 1: " << persona1.nombre << endl;
   cout << "Edad 1: " << persona1.edad << endl;


    return 0;
}