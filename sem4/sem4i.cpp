#include<bits/stdc++.h>
using namespace std;
#define BUC(i, a, b) for(int i = a; i < b; i++)

int main(){
    int n;
    cin >> n;
    int precio[n], personas[n];
    BUC(i, 0, n){
        cin >> precio[i];
    }
    BUC(i, 0, n){
        cin >> personas[i];
    }
    sort(precio, precio+n,greater<>());
    sort(personas, personas+n, greater<>());
    long long maxim = 0;
    BUC(i, 0 ,n){
        maxim += (long long)precio[i]*(long long)personas[i];
    }
        cout << maxim;
    return 0;
}