#include <bits/stdc++.h>
using namespace std;

int main (){
    int n ,m, i = 0, j = 0;
    long long sum = 0;
    cin >> n >> m;
    int cap[n];
    int grupos[m];
    for (int i = 0; i < n; i++){
        cin >> cap[i];
    }
    for (int i = 0; i < m; i++){
        cin >> grupos[i];
    }
    
    sort (cap, cap+n, greater<>());
    sort (grupos, grupos+m, greater<>());

    while(i < n && j < m){
        if(cap[i] >= grupos[j]){
            sum += grupos[j];
            i++;
        } 
        j++;
    }
   
    cout << sum;
    return 0;
}