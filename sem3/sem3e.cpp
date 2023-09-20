#include <iostream>
using namespace std;

int main(){

    int N, M;
    bool original = true;
    cin >> N >> M;

    char pintura[N][M];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> pintura[i][j];
        }
    }
    
    for (int i = 0; i < N-1; i++){
        for (int j = 0; j < M-1; j++)
        {
            if(pintura[i][j] == pintura[i][j+1] && pintura[i][j] == pintura[i+1][j] && pintura[i][j] == pintura[i+1][j+1]){original = false;}
        }  
    }
    
    if(original) {cout << "ORIGINAL";}else{cout << "NO ORIGINAL";}

    return 0;
}