#include <iostream>
#include <vector>

using namespace std; 

int main(){

    int flavor, sum = 0;
    cin >> flavor;

    vector<int> shop1(flavor);
    for(int i = 0; i < flavor; i++){
        cin >> shop1[i];
    }

    vector<int> shop2(flavor);
    for(int i = 0; i < flavor; i++){
        cin >> shop2[i];
        sum = shop1[i] + shop2[i];
        cout << sum <<" ";
    }

    return 0;
}