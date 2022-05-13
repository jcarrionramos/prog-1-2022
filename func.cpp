#include "iostream"

using namespace std;


// tipoDeDato nombreFuncion(tipoDeDato nombreVariable, ...) {
//   BLOQUE DE CODIGO
//   return;
// }

int suma(int primero, int segundo) {
  int c = primero + segundo;
  return c;
}

int suma(int primero, int segundo) {
  return primero + segundo;
}


int main() {
  int a, b;
  cin >> a >> b;

  int c = suma(a, b);
  int d = suma(10, 10);
  int e = suma(20, 10);

  cout << "La suma es: " << c << endl;
  cout << "La suma es: " << d << endl;
  cout << "La suma es: " << e << endl;
}