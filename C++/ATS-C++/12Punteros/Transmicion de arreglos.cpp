/*147. Transmicion de arreglos*/

/*Ejemplo: Hallar el maxximo elemento de un arreglo*/
#include <iostream>
using namespace std;

//Funciones usadas
int hallarMax(int *, int); //Funcion que recibira la direccion de la primera posicion del arreglo, y la cantidad de elementos en el arreglo

int main(){
    const int nElementos = 5;
    int elementos[nElementos] = {3, 5, 2, 8, 1};

    cout << "El mayor elemento en el arreglo es: " << hallarMax(elementos, nElementos) << endl;

    return 0;
}

int hallarMax(int *dirVec, int nElementos){
    int max = 0;
    for (int i = 0; i < nElementos; i++){
        if (*(dirVec + i) > max){
            max = *(dirVec + i);
        }
    }
}