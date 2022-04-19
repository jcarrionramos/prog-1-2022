#include "iostream"

using namespace std;

int main() {
  int magicNumber = 15;

  int number;
  cout << "Adivina mi numero" << endl;
  cin >> number;

  if (magicNumber == number) {
    cout << "Adivinaste!" << endl;
  } else {

    while(magicNumber != number) {
      cout << "Numero incorrecto. Vuelve a intentarlo" << endl;
      cin >> number;
    }

    cout << "Adivinaste!" << endl;
  }

}