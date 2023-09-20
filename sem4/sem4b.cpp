#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, maxim = INT_MIN , minim = INT_MAX, index;
    cin >> N;

    int lista[N];
    for (int i = 0; i < N; i++){
        cin >> lista[i];
        maxim = max(lista[i], maxim);
        minim = min(lista[i], minim);
    }
    int aux[maxim-minim+1] = {0};

    for (int i = 0; i < N; i++){
        index = lista[i] - minim;
        aux[index]++;
    }

    for (int i = 0; i < maxim - minim + 1; i++){
        while (aux[i] > 0)
        {
            cout << i + minim << ' '; 
            aux[i]-- ;   
        }
    }

    return 0;
}