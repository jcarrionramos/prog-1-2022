#include "iostream"

using namespace std;

int main() {
  int n;
  cin >> n;

  int contador = 0;
  for (int i = 1; i <= n; i = i + 1) {
    if (n % i == 0) {
      contador = contador + 1;
    }
  }

  if (contador == 2) {
    cout << "El numero es primo" << endl;
  } else {
    cout << "El numero NO es primo" << endl;
  }
}