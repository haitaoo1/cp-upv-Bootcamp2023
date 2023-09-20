#include <iostream>
using namespace std;

int main(){
    int horas = 12, minutos = 0, extraMin, extraHoras;

    cin>> extraMin;
    if (extraMin>=60){
        extraHoras = extraMin/60;
        extraMin = extraMin%60;
        horas+=extraHoras;
    }
    minutos += extraMin;
    if(horas>24){
        horas = horas % 24;
    }
    printf("%02d:%02d", horas, minutos);
    return 0; 
}
