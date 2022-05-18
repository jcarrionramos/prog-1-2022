#include "iostream"

using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; i = i + 1) {
    int n = i;

    int contador = 0;
    for (int j = 1; j <= n; j = j + 1) {
      if (n % j == 0) {
        contador = contador + 1;
      }
    }

    if (contador == 2) {
      cout << "El numero " << n << " es primo" << endl;
    } else {
      cout << "El numero " << n << " NO es primo" << endl;
    }
  }

}