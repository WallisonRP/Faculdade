/* 4 - Faça um programa que calcule a área de um circulo a partir de seu raio sabendo que:
Area = π.R²*/

#include <iostream>

using namespace std;

int main() {

  float raio, res, pi;
  pi = 3.1415;

  cout << "Insira o raio: " << endl;
  cin >> raio;

  res = pi * (raio * raio);

  cout << "A área de seu circulo é: " << res << "." << endl;


  return 0;


}