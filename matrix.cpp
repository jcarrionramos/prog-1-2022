#include "iostream"

using namespace std;

int main () {
  float notas[5][3];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> notas[i][j];
    }
  }

  float sumaFinal = 0;
  for (int i = 0; i < 5; i++) {
    float sumaActual = 0;
    
    for (int j = 0; j < 3; j++) {
      sumaActual += notas[i][j];
    }

    sumaFinal += sumaActual;
    float promedioCurso = sumaActual / 3;
    cout << "El Curso " << i << " promedio: " << promedioCurso << endl;
  }

  float promedioFinal = sumaFinal / 5; 
  cout << "El promedio semestral es:" << promedioFinal << endl;
}




