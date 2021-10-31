/*146. Transmicion de direcciones*/

/*Ejemplo: Intercambiar el valor de dos variables*/
#include <iostream>
using namespace std;

//Funciones usadas
void intercambio(float *, float *); //Funcion que recibira dos punteros, es decir, las direcciones de las variables


int main(){
    float num1 = 20.8, num2 = 6.78;
    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;
    //Uso de funcion
    intercambio(&num1, &num2); //Mandamos la direccion de donde se almacena el valor, por el uso de apuntadores
    cout << "\n\nDespues del intercambio\n\n";
    cout << "Nuevo primer numero: " << num1 << endl;
    cout << "Nuevo segundo numero: " << num2 << endl;

    return 0;
}

void intercambio(float *dirNum1, float *dirNum2){
    float aux; //Variable auxiliar
    //Intercambio de valores
    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;
}