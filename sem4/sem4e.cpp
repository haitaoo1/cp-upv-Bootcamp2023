#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int mex[n];
    for (int i = 0; i < n; ++i){
        cin >> mex[i];
    }
    sort(mex, mex+n);

    for (int i = 0; i < n; ++i){
        if(mex[i] != i){
            cout << i;
            return 0;
        }
    }
    cout << n;
}