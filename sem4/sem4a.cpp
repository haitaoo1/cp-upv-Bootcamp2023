#include <iostream>
using namespace std;

int main(){
    int N, aux;
    cin >> N;

    int lista[N];
    for (int i = 0; i < N; i++){
        cin >> lista[i];
    }
    for(int j = 0; j < N; j++){
        for (int i = 0; i < N-1; i++){
            if(lista[i] > lista[i+1]){
                aux = lista[i];
                lista[i] = lista [i+1];
                lista[i+1] = aux;
            }
        }
    }

    for (int i = 0; i < N; i++){
        cout << lista [i] << ' ';
    }
    


    return 0;
}