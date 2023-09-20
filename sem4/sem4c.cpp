#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, diff = INT32_MAX;
    cin >> N;

    int size[N];
    for (int i = 0; i < N; i++){
        cin >> size[i];
    }
    sort(size, size+N);
    for (int i = 0; i < N-1; i++){
        diff = min(diff, size[i+1]-size[i]);
    }
    
    cout << diff;
    return 0;
}