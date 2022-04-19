#include "iostream"

using namespace std;

int main() {
  int magicNumber = 15;
  int number;
  cout << "Ingresa número" << endl;
  cin >> number;

  while (true) {
    if (magicNumber == number) {
      cout << "Adivinaste!" << endl;
      break;
    } else {
      cout << "Intenta nuevamente" << endl;
      cin >> number;
    }
  }

  cout << "FIN DEL PROGRAMA" << endl;
}