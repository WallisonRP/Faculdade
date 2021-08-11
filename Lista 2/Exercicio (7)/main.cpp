/* 7 - Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, 
calcule e mostre o salário bruto e à receber de acordo com as regras:
a) A hora trabalhada vale 20% do salário mínimo
b) O salário bruto é o valor da hora trabalhada multiplicado pelo número de horas 
trabalhadas
c) O imposto equivale à 3% do salário bruto
d) O salário à receber é o salário bruto descontado o imposto. */

#include <iostream>

using namespace std;

int main() {
  float horas_trabalhadas, salario_minimo, valor_hora, salario_final, imposto;
  string nome;

  cout << "Digite o nome do funcionário: " << endl;
  cin >> nome;
  
  cout << "Digite o número de horas trabalhadas pelo " << nome << endl;
  cin >> horas_trabalhadas;
  
  cout << "Digite o valor do salário de mínimo: " << endl ;
  cin >> salario_minimo;

  valor_hora = salario_minimo / 5;
  salario_final = (valor_hora * horas_trabalhadas);
  imposto = (salario_final * 0.03);

  cout << "O valor da hora trabalhada é: " << valor_hora << endl;
  cout << "O valor do salário bruto é: " << salario_final  << endl;
  cout << "O valor do imposto é: " << imposto  << endl;
  cout << "O salário a receber é: " << (salario_final - imposto) << endl;

  return 0;

}