#include <iostream>
using namespace std;

int calculo(int a){
    a=a*67;
    a=a%24;
    if (a>=0 and a<5){
        return 0;
    }else if(a>=5 and a<12){
        return 75;
    }else if(a>=12 and a<18){
        return 54;
    }else if(a>=18){
        return 99;
    }
}

int main(){

    int a;
    cin>>a;
    a= calculo(a);
    cout<<a<<endl;

    return 0;
}