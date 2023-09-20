#include <iostream>
#include <vector>

using namespace std ;
int main(){

    int color = 0, row, size; 
    cin>>row;

    while(row--){
        cin>>size>>color;

        vector<int> numbers(size);
        bool found = false;

        for(int i = 0; i<size; i++){
            cin>>numbers[i];
        }

        for (int i = 0; i < size; i++) {
            if (numbers[i] == color) {
                found = true;
                break;
            }
        }

        if(found){cout << "YES" << endl;}
        else{cout << "NO" << endl; }
    } 
    return 0; 
}
