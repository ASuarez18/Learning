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
};

int main(){
    
    return 0;
}