#include "iostream"

using namespace std;

int fibonacciIterativo(int n) {
  int t1 = 0, t2 = 1, nextValue = 0;
  for (int i = 2; i <= n; i++) {
    nextValue = t1 + t2;
    t1 = t2;
    t2 = nextValue;
  }

  return nextValue;
}

int fibonacciRecursivo(int n) {
  if (n < 2) { 
    return n;
  }

  return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
}

int main() {
  // 100000000;
  int n = 50;
  // cout << "El fibonacci de n = " << fibonacciIterativo(n) << endl;
  cout << "El fibonacci de n = " << fibonacciRecursivo(n) << endl;
}