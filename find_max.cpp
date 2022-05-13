#include "iostream"

using namespace std;

int main() {

  int input;
  cin >> input;

  int maximo = input;
  int min = input;

  for (int i = 0; i < 24; i++) {
    cin >> input;

    if (maximo < input) {
      maximo = input;
    }

    if (min > input) {
      min = input;
    }
  }

  cout << "El numero más grandes es: " << input << endl;

}