/* 5 - Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois, caso contrário multiplique A por B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela*/

#include <iostream>

using namespace std;

int main() {
  int A, B, C;

  cout << "Digite dois valores" << endl;
  cin >> A >> B;

  if (A == B)
    C = (A + B);

  else 
    C = (A * B);

  cout << C;
}