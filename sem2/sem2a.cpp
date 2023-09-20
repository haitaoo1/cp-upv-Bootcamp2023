#include <iostream>
#include <vector>
using namespace std;

int main (){
    long long int defecto;
    long long int suma= 0;
    vector<int>defectos;
    
    while(cin>>defecto){
        defectos.push_back(defecto);
    }

    for(int i = 0; i<defectos.size(); i++){
        suma += defectos[i];
        cout<<suma<<" ";
      
    }
    return 0;
}