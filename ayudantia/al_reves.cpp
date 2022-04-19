/*
 * Crearemos un programa que lea un número entero de tres cifras y determine si es igual al revés del número.
 */
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Ingrese numero"<<endl;
    cin>>num;
    int uni = num%10, cent = num/100;
    if(num > 99 && num < 1000){
        if(uni == cent){
            cout<<"El numero es igual a su inverso"<<endl;
        } else{
            cout<<"El numero es distinto a su inverso"<<endl;
        }
    } else {
        cout<<"Debe ingresar un numero de tres cifras"<<endl;
    }

    return 0;
}