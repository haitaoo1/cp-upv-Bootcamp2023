#include <iostream>
#include <vector>
using namespace std;

int main(){
    int paradas = 0;

    cin >> paradas;

    vector<int> nivel(paradas);
    for (int i = 0; i < paradas; i++)
    {
        cin >> nivel[i];   
    }
    int max = nivel[0];
    int min = nivel[0];
    for (int i = 0; i < paradas; i++)
    {
        if(nivel[i] > max){
            max = nivel[i];
        }
        if (nivel[i] < min){
            min = nivel[i];
        }
    }
    
    cout <<min <<" "<<max;   

    return 0;
}