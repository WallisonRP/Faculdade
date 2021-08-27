#include <iostream>

using namespace std;

int main() {
  int lado1, lado2, lado3;
  cout << "Digite os 3 lados do triângulo: \n";
  cin >> lado1 >> lado2 >> lado3;

  if (lado1 > lado2 - lado3 && lado1 < lado2 + lado3) {
    if (lado2 > lado3 - lado1 && lado2 < lado3 + lado1) {
      if (lado3 > lado2 - lado1 && lado3 < lado2 + lado1) {
        if (lado1 == lado2 && lado1 == lado3){
          cout << "Os valores informados forman um triângulo Equilátero";
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
          cout << "Os valores informados forman um triângulo Isósceles";
        } else {
          cout << "Os valores informados forman um triângulo Escaleno";
        }
      }
    }
  } else {
    cout << "Os valores informados não formam um triângulo. Tente novamente!";
  }

  return 0;
}