#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    double izq = 0, der = n, mid = 0;
    while (der - izq > 1e-7){
        mid = (der+ izq) / 2.0;
        if(mid * mid >= n){ der = mid;
        }else {izq = mid;}

    }
    cout << fixed <<setprecision(7) << mid;

    return 0;
}