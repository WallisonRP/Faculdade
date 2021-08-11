/* 6 - Faça um programa que leia o ano de nascimento de uma pessoa e o ano atual, calcule e 
mostre:
a) A idade da pessoa;
b) A idade da mesma em 2050 */

#include <iostream>

using namespace std;

int main() {
  float ano_nascimento, idade, idade_2050, ano_atual;

  cout << "Digite o ano de nascimento" << endl;
  cin >> ano_nascimento;
  
  cout << "Digite o ano atual" << endl;
  cin >> ano_atual;

  idade = (ano_atual - ano_nascimento);
  idade_2050 = (2050 - ano_nascimento);


  cout << "O ano é: " << ano_atual << endl;
  cout << "Sua idade é: " << idade << endl;
  cout << "Em 2050 sua idade será: " << idade_2050 << endl;

return 0;

}