/*Asignacion dinamica de arreglos
Informacion:
new : Reserva el numero de bytes solicitado por la declaracion
delete : Libera un bloque de bytes reservado con anterioridad. 
*/

/*Ejemplo: Pedir al usuario n calificaciones y almacenarlas en un arreglo dinamico*/

#include <iostream>
#include <stdlib.h> //Libreria para new y delete
using namespace std;

//Funciones usadas
void pedirNotas();
void mostrarNotas();
//Variables globales
int numCalif, *calif;

int main(){
    pedirNotas();
    mostrarNotas();

    delete[] calif; //Se borra el espacio de memoria reservado y utilizado para el arreglo dinamico
    return 0;
}

void pedirNotas(){
    cout << "Ingrese el numero de calificaciones: ";
    cin >> numCalif;

    //Igualamos calif a la primera posicion del arreglo
    calif = new int[numCalif]; //Creamos el arreglo de tipo dinamico, reservando la memoria que usara con el new;

    for (int i = 0; i < numCalif; i++){
        cout << "Ingrese calificacion: ";
        cin >> calif[i];
    }   
}

void mostrarNotas(){
    cout << "\n\nMostrando calificaciones del usuario: \n";
    for (int i = 0; i < numCalif; i++){
        cout << "Calificacion " << i + 1 << ": " << calif[i] << endl;
    }
}