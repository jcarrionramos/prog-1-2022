#include "iostream"

using namespace std;

int main() {
  int c;
  cin >> c;

  if ((c % 2 == 0 && c != 2) || c % 3 == 0 || c % 5 == 0) {
    cout << "El numero no es primo" << endl;
  } else {
    cout << "El numero es primo" << endl;
  }
}