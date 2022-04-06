/*
 * Haremos un ejercicio para calcular la nota de presentación, donde se tendrán que ingresar 3 notas:
 *  Nota promedio controles (20%)
 *  Nota promedio tareas (30%)
 *  Nota promedio solemnes (50%)
 *  Calcular la nota final del curso, si la nota es menor a 3.95 está reprobado, mayor o igual a 3.95 y menor de 5 pasa a examen,
 *  y si la nota es mayor o igual a 5 el estudiante está eximido.
 */
#include <iostream>
using namespace std;
int main() {
    float nc, nt, ns;
    cout<<"Ingrese nota promedio de controles"<<endl;
    cin>>nc;
    cout<<"Ingrese nota promedio de tareas"<<endl;
    cin>>nt;
    cout<<"Ingrese nota promedio de solemnes"<<endl;
    cin>>ns;
    float nf = (nc*0.2)+(nt*0.3)+(ns*0.5);
    cout<<"La nota final es: "<<nf<<endl;
    if( nf < 3.95 ){
        cout<<"Esta reprobado"<<endl;
    } else if( nf >= 3.95 && nf < 5){
        cout<<"Pasa a examen"<<endl;
    } else {
        cout<<"Esta eximido"<<endl;
    }
    return 0;
}