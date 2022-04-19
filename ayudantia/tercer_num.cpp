/*
 * Debe hacer un programa donde se ingresarán 3 números y debe verificar si el tercero es el resto de los dos primeros.
 */
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout<<"Ingrese numero 1"<<endl;
    cin>>num1;
    cout<<"Ingrese numero 2"<<endl;
    cin>>num2;
    cout<<"Ingrese numero 3"<<endl;
    cin>>num3;
    int resto = num1 % num2 ;
    if(resto == num3){
        cout<<"El tercer número si es el resto de la división de los dos primeros"<<endl;
    } else {
        cout<<"El tercer número no es el resto de la división de los dos primeros"<<endl;
    }

    return 0;
}