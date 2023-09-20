#include <iostream>
#include <conio.h>
#include <stdlib.h> // new y delete
using namespace std;

void pedirDatos();
void ordenarArray(int*, int);

int nElementos, *elementos; //*var = puntero

int main(){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    cout << "numero de elementos del Array";
    cin >> nElementos;

    elementos = new int[nElementos];

    for (int i = 0; i < nElementos; i++)
    {
        cout << "dame un numero ["<< i << "] : " ;
        cin >>nElementos;
    }
}

void ordenarArray(int *elementos, int nElementos){
    int aux;
    for (int i = 0; i < nElementos; i++)
    {
        for (int j = 0; j < nElementos; j++)
        {
            if(*(elementos+j)>*(elementos+j+1)){ //elementos[j]>elementos[j+1]
                aux = *(elementos+j);
                *(elementos+j) = *(elementos+j+1);
                *(elementos+j+1) = aux;
            }   
        }
        
    }

}

