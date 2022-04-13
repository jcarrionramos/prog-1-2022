#include <iostream>
using namespace std;
int main(){
    int base, exponente, potencia = 1;
    cout<<"Ingrese base: "<<endl;
    cin>>base;
    cout<<"Ingrese exponente: "<<endl;
    cin>>exponente;
    for (int i = 0; i < exponente; i++){
        potencia *= base;
    }
    cout<<"La potencia es: "<<potencia<<endl;
    return 0;
}