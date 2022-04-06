#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Ingrese numero"<<endl;
    cin>>numero;
    int cent = numero/100, uni = numero%10, dec=(numero/10)%10;
    int inv = uni*100 + dec*10 + cent;
    if(numero>=100 && numero < 1000){
        cout<<"El numero inverso es: "<<inv<<endl;
        if(cent == uni){
            cout<<"El numero es igual a su inverso"<<endl;
        } else{
           cout<<"El numero es distinto a su inverso"<<endl;
        }
    }else{
        cout<<"el numero debia ser de 3 cifras"<<endl;
    }

    return 0;
}