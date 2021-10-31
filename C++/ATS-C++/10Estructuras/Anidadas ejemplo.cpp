/* 58*/

#include <iostream> 

using namespace std;

//Declarar una estructura
struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

//Declaracion de estructura anidada
struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado; //Razon de anidamiento
    double salario;
}empleados[2];

int main(){
    //Llenado
    for (int i = 0; i < 2; i++){
        fflush(stdin); // Funcion para vaciar el buffer y permitir digitar valores
        cout << "Ingrese nombre: ";
        cin.getline(empleados[i].nombre, '20', '\n');
        cout << "Ingrese direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion, '30', '\n');
        cout << "Ingrese ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad, '20', '\n');
        cout << "Ingrese provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia, '20', '\n');
        cout << "Ingrese salario: ";
        cin >> empleados[i].salario;
        cout << endl;
    }

    //Impresion de datos
    for(int i = 0; i < 2; i++){
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Direccion: " << empleados[i].dir_empleado.direccion << endl;
        cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << endl;
        cout << "Provincia: " << empleados[i].dir_empleado.provincia << endl;
        cout << "Salario: " << empleados[i].salario << endl << endl; 
    }    
    return 0;
}