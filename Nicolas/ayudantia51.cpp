#include <iostream>
using namespace std;

int main(){

    int opcion=0;
    int ventatotal=0;

    while (opcion!=4){

        cout<<"Ingrese 1 para ver venta total"<<endl
        <<"Ingrese 2 para registrar venta"<<endl
        <<"Ingrese 3 para ver incremento/disminucion"<<endl
        <<"Ingrese 4 para finalizar el dia"<<endl<<endl;
        cin>>opcion;
        if (opcion==1){
            cout<<"La venta total ACTUAL es de: "<<ventatotal<<endl;
        }else if(opcion==2){
            cout<<"Ingrese el monto de la venta"<<endl;
            int ventactual;
            cin>>ventactual;
            ventatotal+=ventactual;
        }else if(opcion==3){
            double porcentaje;
            int ventaanterior;
            cout<<"Ingrese monto vendido ayer"<<endl;
            cin>>ventaanterior;
            porcentaje=(double)(ventatotal*100)/ventaanterior;
            double varianza=porcentaje-100;
            cout<<"El aumento/disminucion es de: "<<varianza<<endl;
        }else if(opcion==4){
            cout<<"Venta total del dia: "<<ventatotal<<endl;

            double porcentaje;
            int ventaanterior;
            cout<<"Ingrese monto vendido ayer"<<endl;
            cin>>ventaanterior;
            porcentaje=(double)(ventatotal*100)/ventaanterior;
            double varianza=porcentaje-100;
            cout<<"El aumento/disminucion es de: "<<varianza<<endl;
            cout<<"Bye bye"<<endl;
        }else{
            cout<<"Opcion incorrecta, lea manual de usuario"<<endl;
        }
    }

    return 0;
}