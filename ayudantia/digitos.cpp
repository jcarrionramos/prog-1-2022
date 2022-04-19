/*
    Se pide ingresar un entero de cuatro cifras (ej: 1243, 7562..), luego se debe extraer cada dígito 
    y verificar si es par o impar y finalmente debe mostrar cuántos dígitos son pares y cuántos son impares. 
*/
#include <iostream>
using namespace std;
int main() {
    int num, cant_par, cant_impar;
    cout<<"Ingrese un entero de 4 digitos"<<endl;
    cin>>num;
    int mil = (num/1000),cent = (num/100)%10, dec = (num/10)%10, uni = (num%10);
    if(mil%2 == 0){
        cant_par++;
    } else {
        cant_impar++;
    }
    if(cent%2 == 0){
        cant_par++;
    } else {
        cant_impar++;
    }
    if(dec%2 == 0){
        cant_par++;
    } else {
        cant_impar++;
    }
    if(uni%2 == 0){
        cant_par++;
    } else {
        cant_impar++;
    }
    cout<<"Digitos pares: "<<cant_par<<endl;
    cout<<"Digitos impares: "<<cant_impar<<endl;
    return 0;
}