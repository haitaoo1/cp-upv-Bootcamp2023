#include <iostream>
using namespace std;

int main(){
    long long int Aceitunas,Tomates,Nuez;
    long long int VA = 5,VT = 7,VN = 13;
    long long int min = 0;
    cin>>Aceitunas>>Tomates>>Nuez;
    if(Nuez>0){
        cout<<Aceitunas*VA+Tomates*VT+Nuez*VN-VN;
    }else if(Tomates>0){
        cout<<Aceitunas*VA+Tomates*VT-VT;
    }else{cout<< max(Aceitunas*VA-VA,min);}
    return 0;
}