#include <iostream>
#include <vector>
#include <iomanip>

using namespace std; 

int main(){
    int N, valido = 0;
    double NotaMedia= 0.0;
    cin>>N;
    vector<double>notas(N);
    for(int i = 0; i<N ; i++){
       
        cin >> notas[i];
        if(notas[i] >= 5.00 ){
            NotaMedia += notas[i];
            valido ++;
        }
    }
    cout<<fixed<<setprecision(2)<<NotaMedia/valido;
}

