#include <iostream>
using namespace std;

int main(){

    float promcon,promta,promsol;
    cout<<"Ingrese el promedio de los controles"<<endl;
    cin>>promcon;
    cout<<"Ingrese el promedio de las tareas"<<endl;
    cin>>promta;
    cout<<"Ingrese el promedio de las solemnes"<<endl;
    cin>>promsol;

    float promedio=(promcon*0.2)+(promta*0.3)+(promsol*0.5);
    cout<<promedio<<endl<<endl;
    if(promedio<3.95){
        cout<<"Pal lobby"<<endl;
    }else if(promedio>=3.95 && promedio<5){
        cout<<"Pal Gulag"<<endl;
    }else{
        cout<<"De vacaciones"<<endl;
    }

    return 0;
}