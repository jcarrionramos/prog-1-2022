#include "iostream"

using namespace std;

// el parametro x es una copia del valor que recibe en la funcion main
int sumarUno(int x) {
  x = x + 1;
  return x;
}

// Fijarse aca que esta funcion podría ser void, ya que actualiza el valor
// de xPuntero por referencia, de esta forma, no es necesario retornar
// y reasginar el nuevo valor
int sumarUnoReferencia(int* xPuntero) {
  *xPuntero = *xPuntero + 1;
  return *xPuntero;
}

int main() {
  int x = 2;
  
  sumarUnoReferencia(&x);
  
  cout << "El valor de X: " << x << endl;
}