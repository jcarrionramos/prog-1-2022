#include "iostream"

using namespace std;

int main() {
  // string cars[4];
  // cars[0] = "Volvo";
  // cars[1] = "BMW";
  // cars[2] = "Ford";
  // cars[3] = "Ferrari";

  //                    0   ,   1  ,    2  ,     3
  string cars[4] = { "Volvo", "BMW", "Ford", "Ferrari" };

  for (int i = 0; i < 4; i++) {
    cout << "El auto: " << cars[i] << endl;
  }
}