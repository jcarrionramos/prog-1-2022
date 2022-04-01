/*
    Recibiremos 3 números enteros, los sumaremos entre ellos y verificaremos si es que dan como resultado un número par o impar.
*/
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout<<"Ingrese un numero entero 1"<<endl;
    cin>>num1;
    cout<<"Ingrese un numero entero 2"<<endl;
    cin>>num2;
    cout<<"Ingrese un numero entero 3"<<endl;
    cin>>num3;
    int sum = num1 + num2 + num3;
    cout<<"La suma total es: "<<sum<<endl;
    if(sum%2 == 0){
        cout<<"La suma es par!"<<endl;
    } else{
        cout<<"La suma es impar!"<<endl;
    }
    return 0;
}