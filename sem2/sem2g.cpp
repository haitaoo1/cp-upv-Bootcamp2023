#include <iostream> 
#include <vector>
using namespace std;

int main(){

    int escalon, nivel = 0;
    vector<int> escalones;
    while(cin >> escalon){
        escalones.push_back(escalon);
    }

    for (int i = 0; i < escalones.size()-1; i++)
    {
        nivel = escalones[i];
        if(escalones[i+1] == nivel){
            cout << "I";
        }else if (escalones[i+1] > nivel){
            cout << "S";
        } else{
            cout << "B";}  
    }
    

    return 0;
}