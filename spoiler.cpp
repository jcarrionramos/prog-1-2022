#include "iostream"

using namespace std;

int main () {
  int numero;
  cin >> numero;

  if (numero % 2 == 0) {
    cout << "Es divisible por 2" << endl;
  } else {
    cout << "NO es divisible por 2" << endl;
  }
}
