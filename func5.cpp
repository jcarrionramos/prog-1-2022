#include "iostream"

using namespace std;

int func1(int x) {
  int resultado = x * x;
  cout << "x al cuadrado es: " << resultado << endl;
  return resultado;
}

string crearTextoSaludo() {
  string nombre;
  cin >> nombre;
  return "Hola " + nombre;
}

void saludarPorPantalla() {
  string nombre;
  cin >> nombre;
  cout << "Hola " <<  nombre << endl;
}

int main() {
  string lala;
  lala = crearTextoSaludo();
  saludarPorPantalla(); // de tipo void

  // string texto = crearTextoSaludo();
  // cout << "texto Resultado: " << texto << endl;
}
