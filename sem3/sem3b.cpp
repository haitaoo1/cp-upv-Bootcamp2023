#include <iostream>

using namespace std;

int main (){
    int lado = 0, size = 4;
    cin >> lado;

    char cuadrado[lado*size+1][lado*size+1];

    for (int i = 0; i < lado*size+1; i++)
    {
        for (int j = 0; j < lado*size+1; j++)
        {
            if(i % size == 0){
                
                if(j % size == 0){
                    cout <<'+';
                } else{cout << '-';}
            } else{
                if(j % size == 0){
                    cout << '|';
                }else{cout << " ";}
            }
        }
        cout << "\n";
    }
    return 0;
}

