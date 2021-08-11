/* 3 - Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário à receber, sabendo-se que o mesmo possui uma gratificação de 5,5% sobre o salário base e paga 7% de IR sobre o salário base.*/

#include <iostream>

using namespace std;


int main() {
float salario_Base, salario, ir, gratificacao, valor_ir;
string nome;

  ir = (0.07);
  gratificacao = (0.055);
  
  cout << "Digite o nome do funcionário: " << endl;
  cin >>  nome;

  cout << "Qual o salário de " << nome << "." << endl;
  cin >> salario_Base;

  valor_ir = (salario_Base * 0.07);
  salario = ((salario_Base * 1.055) - valor_ir);
  
  cout << "-------- Holerite de " << nome <<" --------" << endl;
  cout << "\t  Salário base.....: "<< salario_Base << endl;
  cout << "\t  Gratificação.....: " << salario_Base * gratificacao << endl;
  cout << "\t  Dedução do IR....: " << valor_ir << endl;
  cout << "\t  Salário à receber: " << salario << endl ;
  cout << "-----------------------------------" << endl;  
  
  return 0;
}