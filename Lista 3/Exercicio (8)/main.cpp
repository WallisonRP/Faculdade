/* 8 - Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um programa que calcule seu peso ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7. */

#include <iostream>
using namespace std;

int main() {
  float h;
  string genero;

  cout << "Digite a altura em metro" << endl;
  cin >> h;

  cout << "Digite o gênero conforme o código abaixo." << endl;
  cout << "[M] Masculino." << endl;
  cout << "[F] Feminino." << endl;
  cin >> genero;


  if (genero == "m" || genero == "M" )
    cout << "O peso ideal é " << (72.7 * h) - 58;

  else 
    cout << "O peso ideal é " << (62.1 * h) - 44.7;

return 0;
}