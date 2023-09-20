#include <iostream>
#include <vector>
using namespace std;

int main(){
    int pisos = 0 , viviendas = 0, despiertos = 0;
    cin >> pisos >> viviendas;
   
    for (int i = 0; i < pisos; i++){
        for (int j = 0; j < viviendas; j++){
        char ventana1, ventana2;
        cin >> ventana1 >> ventana2;
            if(ventana1 == '#' || ventana2 == '#'){
                despiertos++;
            }
        }   
    }
    cout << despiertos;

    return 0;
}