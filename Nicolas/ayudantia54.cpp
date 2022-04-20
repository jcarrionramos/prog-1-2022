#include "iostream"
using namespace std;
int main(){
    int n = 5;

    while(true){
        int x;
        cout<<"Ingrese numero incognito"<<endl;
        cin>>x;
        if(n>x){
            cout<<"El numero incognito es mayor al ingresado, intentalo nuevamente"<<endl;
            continue;
        } else if(n<x){
            cout<<"El numero incognito es menor al ingresado, intentalo nuevamente"<<endl;
            continue;
        } else{
            cout<<"ACERTASTE!!"<<endl;
            break;
        }
    }
    return 0;
}