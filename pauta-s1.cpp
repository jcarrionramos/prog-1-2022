#include "iostream"
#include "math.h"
#include <limits.h>

using namespace std;

// Pregunta 1 (10 pts)
void pregunta1() {
  int numero;
  cin >> numero;

  int a = numero / 100;
  int b = (numero % 10) / 10; // (numero / 10) % 10;
  int c = numero%10;

  int narciso = pow(a, 3) + pow(b, 3) + pow(c, 3);

  if (narciso == numero) {
    cout << "El numero es narciso" << endl;
  } else {
    cout << "El numero es NO es narciso" << endl;
  }
}

// Pregunta (A) 2 (20 pts)
void pregunta2A() {
  // 5 pts
  int bencinaIncial, capacidad, rendimiento, distancia;
  cin >> bencinaIncial >> capacidad >> rendimiento >> distancia;

  // 5 pts
  int bencinaNecesaria = distancia / rendimiento;
  if (bencinaIncial >= bencinaNecesaria) {
    cout << "Alcanza para hacer el viaje" << endl; // 5 pts
  } else {
    
    // 5 pts
    int bencinaFaltante = bencinaNecesaria - bencinaIncial;
    cout << "Es necesario cargar " << bencinaFaltante << "L de bencina" << endl; 
    
    // 5 pts
    int vecesDeCarga = bencinaFaltante / capacidad;
    if (bencinaFaltante % capacidad) vecesDeCarga++; // Si la división no es exacta, hay que cargar une vez más para completar el resto
    cout << "Se tiene que cargar " << vecesDeCarga << " el tanque" << endl;

  }
}

// Pregunta (B) 2 (20 pts)
void pregunta2B() {
  // 5 pts
  int bencinaIncial, capacidad, rendimiento, distancia;
  cin >> bencinaIncial >> capacidad >> rendimiento >> distancia;

  // 5 pts
  int kmInicialDisponible = bencinaIncial * rendimiento;
  if (kmInicialDisponible >= distancia) {
    cout << "Alcanza para hacer el viaje" << endl; // 5 pts
  } else {
    // 5 pts
    int kmFaltantes = (distancia - kmInicialDisponible);
    int bencinaFaltante = kmFaltantes / rendimiento;
    cout << "Es necesario cargar " << bencinaFaltante << "L de bencina" << endl; 
    
    // 5 pts
    int vecesDeCarga = bencinaFaltante / capacidad;
    if (bencinaFaltante % capacidad) vecesDeCarga++; // Si la división no es exacta, hay que cargar une vez más para completar el resto
    cout << "Se tiene que cargar " << vecesDeCarga << " el tanque" << endl;

  }
}


// Pregunta 3
void pregunta3() {
  // 5 pts
  int tCorrectas = 0;
  float sumaTotal, tMax = INT_MIN, tMin = INT_MAX;
  
  // 2 pt
  for(int i = 0; i < 24; i++) {

    // 4 pts
    float tActual;
    cout << "Ingrese mdeicion de hora " << i << ": " << endl;
    cin >> tActual;
    
    // 2 pts
    if (tActual != -13.1313) {

      // 2 pts
      tCorrectas++;
      sumaTotal = sumaTotal + tActual;

      // 5 pts
      if (tActual > tMax) {
        tMax = tActual;
      }

      // 5 pts
      if (tActual < tMin) {
        tMin = tActual;
      }
    }
  }

  // 5pts
  cout << "Se registraron " << tCorrectas << " temperaturas correctas" << endl;
  cout << "Promedio: " << sumaTotal / tCorrectas << endl;
  cout << "Max: " << tMax << endl;
  cout << "Min: " << tMin << endl;
}

int main () {
  pregunta2B();
}