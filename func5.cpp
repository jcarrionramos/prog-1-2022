#include "iostream"

using namespace std;

int func1(int x) {
  int resultado = x * x;
  cout << "x al cuadrado es: " << resultado << endl;
  return resultado;
}

string saludarNombre() {
  string nombre;
  cin >> nombre;
  return "Hola " + nombre;
}

void saludar() {
  string nombre;
  cin >> nombre;
  cout << "Hola " <<  nombre << endl;
}

int main() {
  saludar();
}
