#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool EsValido(string numeros){
    int sum = 0;

    for (int i = numeros.size() - 1; i >= 0; i--)
    { int digito = numeros[i] - '0';
    
        if( i % 2 == 0){
            digito *= 2;  
            if(digito >= 10){
                digito = (digito / 10 + digito % 10);
            }
        }
        
        sum  += digito;
    }
    return (sum % 10 == 0); 
}

int main(){
    string numeros;
    cin >> numeros;

    if(EsValido(numeros)){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0; 
}