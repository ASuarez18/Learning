/*Ejercicio 3: Rellenar un array de 10 numeros, posteriormente utilizando punteros
indicar cuales son numeros pares y su posicion de memoria*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numeros[10] = {}, n;
    cout << "Debera ingresar 10 numeros" << endl;
    for (int i = 0; i < 10; i++){
        cout << "Numero " << i + 1 << ": " ;
        cin >> n;
        numeros[i] = n;
    }

    int *dir_numeros;
    dir_numeros = numeros;
    for (int i = 0; i < 10; i++){
        if ((*dir_numeros % 2) == 0){
            cout << "El elemento del vector [" << i << "] siendo " << *dir_numeros << " es par" << endl;
            cout << "Su posicion de memoria es: " << dir_numeros << endl;
        }
        dir_numeros++;
    }
    return 0;
}