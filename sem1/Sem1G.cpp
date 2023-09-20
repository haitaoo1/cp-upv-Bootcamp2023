#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main(){
    int num1,num2;
    double resultado = 0;
    char op = 0;;
    cin>> num1>> op>> num2;
    char res[250];
    
    switch (op){
 
        case '+': 
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = (double) num1 / num2;
                sprintf(res,"%0.2lf",resultado);
            } else {
                cout << "ERROR";
                return 0;
            }
            break;
    }
    if(op=='/'){ 
        printf("%s\n",res);
    }else{cout<<resultado;}
    return 0;
}