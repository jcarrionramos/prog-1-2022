#include "iostream"

using namespace std;

void datVuelto(int vuelto, int billetes[], int size) {
  for (int i = 0; i < size; i++) {
    if (vuelto / billetes[i] > 0) {
      cout << vuelto / billetes[i] << " billetes de " << billetes[i] <<endl;
      vuelto = vuelto % billetes[i];
    }
  }  
}

int main () {
  int vuelto;
  cin >> vuelto;

  int billetesCLP[5] = { 20000, 10000, 5000, 2000, 1000 };
  int billetesJC[5] = { 100, 50, 20, 10, 1 };
  int billetesNM[6] = { 100, 50, 20, 10, 5, 1 };

  datVuelto(vuelto, billetesCLP, 5);
  datVuelto(vuelto, billetesJC, 5);
  datVuelto(vuelto, billetesNM, 6);
}