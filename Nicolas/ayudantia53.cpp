#include <iostream>
using namespace std;
int main(){

    for (int i = 1; i <= 10; ++i) {
        cout<<"Datos empresa "<<i<<endl;
        int co2, n2o, ch4;
        cout<<"Ingrese CO2"<<endl;
        cin>>co2;
        cout<<"Ingrese N20"<<endl;
        cin>>n2o;
        cout<<"Ingrese CH4"<<endl;
        cin>>ch4;
        int suma = co2%10 + n2o*1000 + ch4/21;
        cout<<"La contaminacion total es"<<suma
        <<endl;
        cout<<"***********"<<endl;
    }

    return 0;
}