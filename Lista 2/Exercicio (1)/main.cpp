/*1- Faça um programa que receba três números e seus respectivos pesos, calcule e mostre a média ponderada.*/

#include <iostream>


using namespace std;

int main() {
  float n1, n2, n3, peso1, peso2, peso3, media;

  cout << "Digite três números: " << endl;
  cin >> n1 >> n2 >> n3;

  cout << "Digite os respectivos pesos dos números" << endl;
  cin >> peso1 >> peso2 >> peso3;

  cout << "A média ponderada dos valores é: " << ((n1 * peso1) + (n2 * peso2) + (n3 * peso3))/ (peso1 + peso2 + peso3);

  return 0;

}