#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num, *dir_num; //Declaracion de la variable entera, y el apuntador de esta
    num = 20;
    dir_num = &num; //Se asigna la direccion al apuntador

    cout << "Numero: " << *dir_num << endl; 
    //Se coloca la variable con apuntador para acceder al contenido de la direccion de memoria que se contiene en esta
    cout << "Direccion de memoria: " << dir_num << endl;
    
    return 0;
}