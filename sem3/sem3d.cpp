#include <iostream>

using namespace std;

int main(){

    int N = 0, M = 0;
    int  fil = 0, col = 0;
    cin >> N >> M;
    int sandias[N][M];

    for(int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> sandias[i][j];
        }
    }

    for (int i = 0; i < N; i++){
        int sumfil = 0;
        for (int j = 0; j < M; j++)
        { 
            sumfil += sandias[i][j];   
        }
        fil = max(fil, sumfil);
    }

    for (int j = 0; j < M; j++){
        int sumcol = 0;
        for (int i = 0; i < N; i++)
        { 
            sumcol += sandias[i][j];    
        }
        col = max(col, sumcol);
    }
    int res = max(fil,col);
    cout << res;
    return 0;
}