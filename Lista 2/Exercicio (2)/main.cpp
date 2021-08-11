/*2 - Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que o mesmo sofreu um aumento de 25%*/

#include <iostream>

using namespace std;

int main() {
  float salario, n_Salario;
  string nome;

    cout << "Digite o nome do funcionário: " << endl;
    cin >> nome;

    cout << "Digite o salário de " << nome << "." << endl;
    cin >> salario;

    n_Salario = (salario * 1.25);
    
    cout <<"O novo salario do funcionário " << nome << " é: R$" << n_Salario << endl;
  return 0;
}