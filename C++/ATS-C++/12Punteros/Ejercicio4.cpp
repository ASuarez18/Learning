/*Ejercicio 4: Rellenar un arreglo con n numeros, posteriormente utilizando 
punteros determinar el menor elemento del arreglo*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int numeros[100], n, min, *dir_numeros;
    int elementos;
    cout << "Ingrese el tamanio del vector: ";
    cin >> elementos;
    for (int i = 0; i < elementos; i++){
        cout << "Numero " << i + 1 << ": " ;
        cin >> n;
        numeros[i] = n;
    }
    dir_numeros = numeros;
    min = *dir_numeros++;
    for (int i = 0; i < elementos - 1; i++){
        if (min > *dir_numeros){
            min = *dir_numeros++;
        }
        else{
            *dir_numeros++;
        }
    }
    cout << "El numero menor dentro del vector es: " << min << endl;
    return 0;
}