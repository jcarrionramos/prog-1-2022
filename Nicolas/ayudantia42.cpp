#include <iostream>
using namespace std;

int main(){

    //version Natalia
    /*string contrasena, contra_conf;
    cout<<"Ingrese contrasena: "<<endl;
    cin>>contrasena;
    do{
        cout<<"Ingrese contra de confirmacion"<<endl;
        cin>>contra_conf;
        if(contrasena != contra_conf){
            cout<<"Son distintas"<<endl;
        }
    }while(contrasena != contra_conf);
    cout<<"Las contrasenas son iguales!!";*/

    bool fin=true;
    string password1,password2;
    cout<<"Ingrese la contrasena"<<endl;
    cin>>password1;

    while(fin){
        cout<<"Ingrese nuevamente su contrasena"<<endl;
        cin>>password2;
        if (password1==password2){
            cout<<"Las contrasenas coinciden"<<endl;
            fin=false;
        }else{
            cout<<"Las contrasenas no coinciden"<<endl<<endl;
        }
    }

    return 0;
}