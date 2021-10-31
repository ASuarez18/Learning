/* 123. Insertar nodos en nuestro árbol binario de búsqueda (ABB)*/

#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *izq;
    Nodo *der;
    Nodo *padre;
};

Nodo *arbol = NULL; 
Nodo* crearNodo(int, Nodo*);
void insertaNodo(Nodo*&, int, Nodo*);
void mostrarArbol(Nodo*&, int);
bool buscarNodoArbol(Nodo*&, int);
void preorden(Nodo*&);
void inorden(Nodo*&);
void postorden(Nodo*&);
Nodo* minimoNodo(Nodo*);
void remplazarNodo(Nodo*, Nodo*);
void destruirNodo(Nodo*);
void eliminarNodo(Nodo*);
void buscarParaEliminar(Nodo*, int);

int main(){

}

Nodo* crearNodo(int dato_n, Nodo *padre_n){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato_n;
    nuevoNodo->izq = NULL;
    nuevoNodo->der = NULL;
    nuevoNodo->padre = padre_n;
}

void insertaNodo(Nodo *&arbol, int dato_n, Nodo *padre_n){
    if (arbol == NULL){
        Nodo *nuevoNodo = crearNodo(dato_n, padre_n);
        arbol = nuevoNodo;
    }
    else{
        int valorRaiz = arbol->dato;
        if(dato_n < valorRaiz){
            insertaNodo(arbol->izq, dato_n, arbol);
        }
        else{
            insertaNodo(arbol->der, dato_n, arbol);
        }
    }
}

void mostrarArbol(Nodo *&arbol, int cont){
    if (arbol == NULL){
        return;
    }
    else{
        mostrarArbol(arbol->der, cont+1);
        for(int i = 0; i < cont; i++){
            cout << "\t";
        }
        cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, cont+1);
    }
}

bool buscarNodoArbol(Nodo *&arbol, int numBuscar){
    if (arbol == NULL){
        return false;
    }
    else if(arbol->dato == numBuscar){
        return true;
    }
    else if(arbol->dato < numBuscar){
        return buscarNodoArbol(arbol->izq, numBuscar);
    }
    else{
        return buscarNodoArbol(arbol->der, numBuscar);
    }
}

void preorden(Nodo *&arbol){
    if (arbol == NULL){
        return;
    }
    else{
        cout << arbol->dato << " - ";
        preorden(arbol->izq);
        preorden(arbol->der);
    }
}

void inorden(Nodo *&arbol){
    if (arbol == NULL){
        return;
    }
    else{
        inorden(arbol->izq);
        cout << arbol->dato << " - ";
        inorden(arbol->der);
    }
}

void postorden(Nodo *&arbol){
    if (arbol == NULL){
        return;
    }
    else{
        postorden(arbol->izq);
        postorden(arbol->der);
        cout << arbol->dato << " - ";
    }
}

Nodo* minimoNodo(Nodo *arbol){
    if (arbol == NULL){
        return NULL;
    }
    else if (arbol->izq){
        return minimoNodo(arbol->izq);
    }
    else{
        return arbol;
    }
}

void remplazarNodo(Nodo *arbol, Nodo *nuevo){
    if(arbol->padre){
        if (arbol->padre->izq != NULL){
            if (arbol->dato == arbol->padre->izq->dato){
                arbol->padre->izq = nuevo;
            }
        }
        if (arbol->padre->der != NULL){
            if (arbol->dato == arbol->padre->der->dato){
                arbol->padre->der = nuevo;
            }
        }
        if (nuevo){
            nuevo->padre = arbol->padre;
            //destruirNodo(arbol);
        }
        destruirNodo(arbol); //Cambio?
    }
}

void destruirNodo(Nodo *nodoDestruir){
    nodoDestruir->der = NULL;
    nodoDestruir->izq = NULL;
    nodoDestruir->padre = NULL;
    delete nodoDestruir;
}

void eliminarNodo(Nodo* arbol){
    if (arbol->izq && arbol->der){
        Nodo *minimo = minimoNodo(arbol->der);
        arbol->dato = minimo->dato;
        eliminarNodo(minimo);
    }
    else if (arbol->izq){
        remplazarNodo(arbol, arbol->izq);
    }
    else if(arbol->der){
        remplazarNodo(arbol, arbol->der);
    }
    else{
        remplazarNodo(arbol, NULL);
    }
}

void buscarParaEliminar(Nodo *arbol, int numeroEliminar){
    if (arbol == NULL){
        return;
    }
    else if (numeroEliminar < arbol->dato){
        buscarParaEliminar(arbol->izq, numeroEliminar);
    }
    else if (numeroEliminar > arbol->dato){
        buscarParaEliminar(arbol->der, numeroEliminar);
    }
    else{

    }
}