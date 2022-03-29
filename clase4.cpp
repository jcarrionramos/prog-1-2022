#include "iostream"

using namespace std;

int main () {
  float c1, c2, t1, t2, t3, s1, s2;
  cout << "Ingrese sus notas" << endl;

  cout << "Control 1: " << endl;
  cin >> c1;

  cout << "Control 2: " << endl;
  cin >> c2;

  cout << "Tarea 1: " << endl;
  cin >> t1;

  cout << "Tarea 2: " << endl;
  cin >> t2;

  cout << "Tarea 3: " << endl;
  cin >> t3;

  cout << "Solemne 1: " << endl;
  cin >> s1;

  cout << "Solemne 2: " << endl;
  cin >> s2;

  float notaFinal = c1 * 0.1 + c2 * 0.1 + t1 * 0.1 + t2 * 0.1 + t3 * 0.1 + s1 * 0.25 + s2 * 0.25;

  if (notaFinal < 3.5) {
    cout << "Reprobado" << endl;
  }

  if (notaFinal >= 3.5 && notaFinal < 5) {
    cout << "Examen" << endl;
  }

  if (notaFinal >= 5) {
    cout << "Eximido" << endl;
  }

  // Opciton 1
  // if (notaFinal >= 5) {
  //   cout << "Eximido" << endl;
  // } else {
  //   if (notaFinal < 3.5) {
  //     cout << "Reprobado" << endl;
  //   } else {
  //     cout << "Examen" << endl;
  //   }
  // }
}










