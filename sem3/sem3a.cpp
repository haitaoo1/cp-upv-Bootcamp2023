#include <iostream>
#include <vector>

using namespace std;

int main(){
    int lado = 0;
    bool mermelada = false;
    bool tragedia = false;
    cin >> lado;
    
    char antes[lado][lado];
    char despues[lado][lado];

    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {
            cin >> antes[i][j];
        }
                
    }

    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {
            cin >> despues[i][j];
        }
    }
    
    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {   if(antes[i][j] =='#' || despues[i][j] == '#' ){mermelada = true;}
           
            if(antes[i][j] != despues[i][j]){
                tragedia = true;
                
            }
        }
    }
    if(tragedia){
        cout << "TRAGEDIA";
    } else if(mermelada){
        cout << "HA HABIDO SUERTE";
    }else{
        cout << "NO LLEVABA MERMELADA";
    }
    
    return 0;
}