#include "iostream"

using namespace std;

int main() {
  // n = 7;
  int notas[7];
  
  // indices =  0  1  2  3  4  5  6
  // notas   = [7, 2, 4, 4, 4, 4, 4]

  notas[0] = 7;
  notas[1] = 2;
  notas[2] = 4;
  notas[3] = 2;
  notas[4] = 8;
  notas[5] = 5;
  notas[6] = 10;

  int sumaDeNotas = 0;
  for (int i = 0; i < 7; i++) {
    sumaDeNotas = sumaDeNotas + notas[i];
  }

// Iteración: i = 0
//            sumaDeNotas = sumaDeNotas(0) + notas[i] (7)
//            sumaDeNotas = 7

// Iteración: i = 1
//            sumaDeNotas = sumaDeNotas(7) + notas[i] (2)
//            sumaDeNotas = 9

// Iteración: i = 2
//            sumaDeNotas = sumaDeNotas(9) + notas[i] (4)
//            sumaDeNotas = 13

// ... 

  cout << "La nota final es: " << sumaDeNotas / 7 << endl;
}