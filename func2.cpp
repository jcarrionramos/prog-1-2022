#include "iostream"

using namespace std;

int calcularFib(int n) {
  int t1 = 0, t2 = 1, nextValue = 0;
  for (int i = 2; i <= n; i++) {
    nextValue = t1 + t2;
    t1 = t2;
    t2 = nextValue;
  }

  return nextValue;
}

int main() {
  int n;
  cin >> n;

  int primero = n/100;
  int segundo = n%100/10;
  int tercero = n%10;

  cout << "El fib de primero es: " << calcularFib(primero) << endl;
  cout << "El fib de segundo es: " << calcularFib(segundo) << endl;
  cout << "El fib de tercero es: " << calcularFib(tercero) << endl;

  

}
