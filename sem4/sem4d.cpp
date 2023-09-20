#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    int julian = INT32_MIN, adrian = INT32_MAX;
    cin >> n >> m;
    int tareas[n];

    for (int i = 0; i < n; i++){
        cin >> tareas[i];    
    } 
    sort(tareas , tareas+n);

    for (int i = 0; i < m; i++){
        julian = max(julian, tareas[i]);   
    }
    for (int i = m; i < n; i++){
        adrian = min(adrian, tareas[i]);   
    }
    
    cout << julian <<' '<< adrian ;

    return 0;
}