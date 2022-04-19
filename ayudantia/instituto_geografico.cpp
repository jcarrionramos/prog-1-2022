/*
El Instituto geográfico militar le pide analizar 10 alturas obtenidas de la ciudad de Santiago (valores en km). Tendrá que tomar estos valores y ver cuántos de ellos son múltiplos de 7.
Posterior a esto se tendrá que hacer un simple cout indicando cuantas alturas con dicha característica se encontraron.
*/
#include <iostream>
using namespace std;
int main() {
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, cont = 0;
    cout<<"Ingrese altura 1"<<endl;
    cin>>a1;
    if(a1%7 == 0){
        cont++;
    }
    cout<<"Ingrese altura 2"<<endl;
    cin>>a2;
    if(a2%7 == 0){
        cont++;
    }
    cout<<"Ingrese altura 3"<<endl;
    cin>>a3;
    if(a3%7 == 0){
        cont++;
    }
    cout<<"Ingrese altura 4"<<endl;
    cin>>a4;
    if(a4%7 == 0){
        cont++;
    }
    cout<<"Ingrese altura 5"<<endl;
    cin>>a5;
    if(a5%7 == 0){
        cont++;
    }
    cout<<"Ingrese altura 6"<<endl;
    cin>>a6;
    if(a6%7 == 0){
        cont++;
    }
    cout<<"Ingrese altura 7"<<endl;
    cin>>a7;
    if(a7%7 == 0){
        cont++;
    }
    cout<<"Ingrese altura 8"<<endl;
    cin>>a8;
    if(a8%7 == 0){
        cont++;
    }
    cout<<"Ingrese altura 9"<<endl;
    cin>>a9;
    if(a9%7 == 0){
        cont++;
    }
    cout<<"Ingrese altura 10"<<endl;
    cin>>a10;
    if(a10%7 == 0){
        cont++;
    }
    cout<<"Se encontraron "<<cont<<" alturas que son multiplos de 7"<<endl;
    return 0;
}

