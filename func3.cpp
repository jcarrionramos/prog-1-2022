#include "iostream"

using namespace std;

int lala = 10;

int func1() {
  cout << "Mi variable = " << lala << endl;
  cout << "Func1" << endl;
  return 0;
}

int func2() {
  cout << "Func2" << endl;
  return 0;
}

int func3() {
  cout << "Func3" << endl;
  return 0;
}

int main() {
  
  cout << "Inicio de la funcion Main" << endl;
  
  func1();

  cout << "Fin del main" << endl;
  return 0;
}
