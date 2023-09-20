#include <iostream>

using namespace std;

int main(){
    int N = 0, M = 0 ;
    cin >> N >> M;

    char gotas[N][M];
    bool fil[N]{false} , col[M]{false} ;  

    for(int i = 0; i < N; i++ ){

      for(int j = 0; j <M ; j++){
        cin >> gotas[i][j];
        if(gotas[i][j] == '#'){  
            fil[i] = true;
            col[j] = true;
        }
      } 
    }

    for( int i = 0; i < N ; i++){
        for (int j = 0; j < M; j++){
            if(fil[i] == true || col[j] == true){
                cout << '#';
            }else {cout << '.';}
        } 
        cout << endl;      
    }
    return 0;
}