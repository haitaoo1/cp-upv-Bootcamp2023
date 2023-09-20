#include <iostream>
#include <vector>

using namespace std; 

int main(){
    int n = 0;
    cin >> n;
    int Array1[n], Array2[n];
    
    for(int i = 0; i < n; i++){
        cin >>Array1[i];
    }
    for(int i = 0; i < n; i++){
        cin >>Array2[i];     
   }

    int Aux1[n], Aux2[n];

    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            Aux1[i] = Array1[i];
            Aux2[i] = Array2[i];
        }else{
            Aux1[i] = Array2[i];
            Aux2[i] = Array1[i];
        }
    }

    for(int i = 0; i < n; i++){
            cout << Aux1[i] << " ";    
    }

    cout<<endl;

    for(int i = 0; i < n; i++){
            cout << Aux2[i] << " ";
        }
    
    return 0;
}