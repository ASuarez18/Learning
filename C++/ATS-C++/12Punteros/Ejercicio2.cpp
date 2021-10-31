/*Ejercicio 2: Determinar si un numero es primo o no; con punteros y ademas 
indicar en que posicion de memoria se guardo el numero*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num, *dir_num, n = 0;
    cout << "Ingrese el numero: ";
    cin >> num;
    dir_num = &num;
    for (int i = 1; i < *dir_num; i++){
        if (n % i == 0){
            n++;
        }
    }
    if (n > 2){
        cout << "El numero " << *dir_num << " no es primo" << endl;
    }
    else{
        cout << "El numero " << *dir_num << " es primo" << endl;
    }
    cout << "La direccion de memoria del numero es: " << dir_num;
    return 0;
}