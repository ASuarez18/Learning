/*Ejercicio 1: Comprobar si un numero es par o impar, y senialar la posicion de memoria donde
se esta guardando el numero. Haciendo uso de punteros*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num1, num2, *dir_num1, *dir_num2;
    cout << "Numero 1: ";
    cin >> num1;
    cout << "Numero 2: ";
    cin >> num2;
    dir_num1 = &num1; dir_num2 = &num2;

    cout << "Direccion de primer numero: " << dir_num1 << endl;
    cout << "Direccion de segundo numero: " << dir_num2 << endl;

    if(*dir_num1 > *dir_num2){
        cout << "El primer numero es mayor" << endl;
        cout << *dir_num1 << " > " << *dir_num2 << endl;
    }
    else{
        cout << "El segundo numero es mayor" << endl;
        cout << *dir_num2 << " > " << *dir_num1 << endl;
    }
    return 0;
}