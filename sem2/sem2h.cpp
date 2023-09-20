#include <iostream>
#include <vector>

using namespace std;

vector<int> CartasComun(vector<int>& CartasA, vector<int>& CartasB){
    int i = 0 ,j = 0;
    vector<int> res;
    while (CartasA.size() > i && CartasB.size()>j)
    {
        if(CartasA[i]==CartasB[j]){
            if(res.empty() || res.back() !=CartasA[i] ){
                res.push_back(CartasA[i]);
            }
            i++; 
            j++;
        }
        else if(CartasA[i] > CartasB[j]){
            j++;
        }else{i++;}
    }  
    return res;
}

int main(){
    int A = 0 ,B = 0;
    cin >> A >> B;

    vector<int> cartasA(A);
    vector<int> cartasB(B);
    
    for (int i = 0; i < A; i++){
        cin >> cartasA[i];
    }
    for (int i = 0; i < B; i++){
        cin >> cartasB[i];
    }

    vector<int>Comun = CartasComun(cartasA,cartasB);
    
    for(int i : Comun){
        cout << i << " ";
    }

    return 0;
}