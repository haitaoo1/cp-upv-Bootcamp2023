#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, resuelto, penaliz;
    cin >> n;
    pair <int,int> arr[n];

    for (int i = 0; i < n; i++){
        cin >> resuelto >> penaliz;
        arr[i] = make_pair(resuelto,INT32_MAX-penaliz);
    }
    sort(arr, arr+n, greater<>());

    for (int i = 0; i < n; i++){
        cout << arr[i].first << ' ' << INT32_MAX-arr[i].second <<endl; 


    }
    
    


}