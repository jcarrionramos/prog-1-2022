#include <iostream>
using namespace std;

void suma(int x,int y, int &z){
    z=x+y;
}

int main(){

    int a,b,c=0;
    cin>>a>>b;

    cout<<"Direccion de c: "<<&c<<endl;
    cout<<c<<endl;
    suma(a,b,c);
    cout<<c<<endl;

    return 0;
}