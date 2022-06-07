#include "iostream"

using namespace std;


void modificarArreglo(int* x) {
  x[0] = 1;
}


int main() {
  int lala[1] = { 5 };
  // lala[0] = 5

  modificarArreglo(lala);
  cout << "El valor de lala[0]: " << lala[0] << endl;
}