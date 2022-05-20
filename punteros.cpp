#include "iostream"

using namespace std;

int main() {
  int lala = 100;
  int* pointer = &lala;


  cout << "El valor de pointer " << pointer << endl;
  cout << "El valor de pointer por derefencia " << *pointer << endl;

  pointer = pointer + 1;
  cout << "El valor de pointer DESPUES: " << pointer << endl;
  cout << "El valor de pointer DESPUES dereferencia: " << *pointer << endl;
}