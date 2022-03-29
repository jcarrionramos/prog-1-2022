#include "iostream"

using namespace std;

int main () {
  int a, b, c, d;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;

  int max1;
  if (a > b) {
    max1 = a;
  } else {
    max1 = b;
  }

  int max2;
  if (c > d) {
    max2 = c;
  } else {
    max2 = d;
  }

  if (max1 >  max2) {
    cout << max1 << endl;
  } else {
    cout << max2 << endl;
  }
}










