#include "iostream"

using namespace std;

int main() {
  int n;
  cin >> n;

  int t1 = 0, t2 = 1, nextValue = 0;

  cout << "Fibonacci:" << endl;
  cout << "0, 1, "; 

  for (int i = 1; i <= n; i++) {
    nextValue = t1 + t2;
    t1 = t2;
    t2 = nextValue;

    cout << nextValue << ", "; 
  }
}
