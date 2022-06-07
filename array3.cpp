#include "iostream"

using namespace std;

int main() {
  int size = 24;
  float temperaturas[size];

  for (int i = 0; i < size; i++) {
    cin >> temperaturas[i];
  }

  int min = temperaturas[0];
  int max = temperaturas[0];
  int contador = 0;
  float suma = 0;
  for (int i = 0; i < size; i++) {
    if (temperaturas[i] == -13.1313) {
      continue;
    } 
    
    contador++;
    suma += temperaturas[i];
    if (temperaturas[i] > max) {
      max = temperaturas[i];
    }

    if (temperaturas[i] < min) {
      min = temperaturas[i];
    }
  }

  cout << "Se registraron " << contador << " temperaturas correctas" << endl;
  cout << "Promedio: " << suma / contador << endl;
  cout << "Max: " << max << endl;
  cout << "Min: " << min << endl;
}