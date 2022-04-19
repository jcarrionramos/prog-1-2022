#include <iostream>
using namespace std;

int main(){

    int contador=0;
    for(int i=0;i<=200;i++){
        if (i%8==0){
            cout<<i<<" es multiplo"<<endl;
            contador++;
        }
    }
    cout<<endl<<contador<<endl;

    return 0;
}