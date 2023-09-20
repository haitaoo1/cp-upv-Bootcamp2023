#include <iostream>
using namespace std;

int main(){

    int N, M;
    cin >> N >> M;
    int matriz[N][M];
    int aux[M][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            aux[j][N-i-1] = matriz[i][j];  
        }
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            cout << aux[i][j] << " "; 
        }
        cout << endl;
    }
    

    return 0;
}