#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    //aqui se ingresan los numeros
    cin>>n1>>n2>>n3;
    cout<<"Ingrese numero 1"<<endl;
    cin>>n1;
    cout<<"Ingrese numero 2"<<endl;
    cin>>n2;
    cout<<"Ingrese el supuesto modulo"<<endl;
    cin>>n3;
    int modulo=n1%n2;
    if (modulo==n3){
        cout<<modulo<<" - "<<n3<<endl<<"n3 si es modulo de n1 y n2"<<endl;
    }else{
        cout<<modulo<<" - "<<n3<<endl<<"n3 NO es modulo de n1 y n2"<<endl;
    }
    return 0;
}