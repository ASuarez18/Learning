/*Correspondencia entre arreglos y punteros*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numeros[] = { 1, 2, 3, 4, 5 };
    int *dir_numeros1, *dir_numeros2;

    dir_numeros1 = numeros; //Se le pasa la direccion inicial del arreglo a la variable dir_numeros
    dir_numeros2 = numeros;

    for (int i = 0; i < 5; i++){
        cout << "Elemento del vector [" << i << "] : " << *dir_numeros1++ << endl;
        //El ++ en la variable *dir_numeros es para que vaya recorriendo el arreglo en 4 bytes
        cout << "Posicion de memoria: " << dir_numeros2++ << endl;
        //Con este ultimo letrero es posible ver el avance de los 4 bytes en la posicion de memoria
    }
    return 0;
}