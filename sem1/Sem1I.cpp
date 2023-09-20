#include <iostream>
using namespace std;

int main(){
    long long int n, suma = 0;
    cin >> n;
    suma = n + ((n-1)/2)*n;
    if(n%2==0){
        suma += n/2;
    }
    cout<<suma;
    return 0;
}