#include <iostream>
using namespace std;

void cambiar(int &a,int &b){
    if (b<a){
        int aux=a;
        a=b;
        b=aux;
    }
}

int main(){

    int x,y;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>x;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>y;

    cout<<"Valores iniciales: x="<<x<<" y="<<y<<endl;
    cambiar(x,y);
    cout<<"Valores finales: x="<<x<<" y="<<y<<endl;

    return 0;
}