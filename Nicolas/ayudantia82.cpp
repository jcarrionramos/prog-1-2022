#include <iostream>
using namespace std;

void calculo(int &edad){
    edad=edad*67;
    edad=edad%24;
    //and = &&
    if (edad>=0 and edad<5){
        edad=0;
    }else if(edad>=5 and edad<12){
        edad=75;
    }else if(edad>=12 and edad<18){
        edad=54;
    }else if(edad>=18){
        edad=99;
    }
}

int main(){
    int edad;
    cout<<"Ingrese la edad"<<endl;
    cin>>edad;
    calculo(edad);
    cout<<edad<<endl;
}