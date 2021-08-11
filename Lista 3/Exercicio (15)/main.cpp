/* 15 - Escreva um programa que receba dois números inteiros e que disponibilize as opções abaixo e imprima o resultado da operação:
• A - retornar o soma de dois números;
• S - retornar a subtração de dois números;
• M - retornar a multiplicação de dois números; 
• Q - retornar o quociente inteiro de uma divisão; 
• E - retornar mensagem de erro (opção inválida)*/

#include <iostream>


using namespace std;

int main() {
  float valor1, valor2;
  char opc;

  cout << "Escreva o 1° número: " ;
  cin >> valor1;
  
  cout << "Escreva o 2° número: " ;
  cin >> valor2;

  cout << "Escolha uma opção: " << endl;
  cout << "(A) = Adição" << endl;
  cout << "(S) = Subtração" << endl;
  cout << "(M) = Multiplicação" << endl;
  cout << "(Q) = Divisão" << endl;
  cout << "(E) = Mensagem de erro" << endl;
  cin >> opc;


  switch (opc) {
    case 'A' | 'a': 
      cout << valor1 << " + " << valor2 << " = " << valor1 + valor2 << endl;
      break;

    case 'S' | 's': 
      cout << valor1 << " - " << valor2 << " = " << valor1 - valor2 << endl;
      break;

    case 'M'| 'm': 
      cout << valor1 << " x " << valor2 << " = " << valor1 * valor2 << endl;
      break;

    case 'Q' | 'q': 
      cout << valor1 << " / " << valor2 << " = " << valor1 / valor2 << endl;
      break;
    default :
    cout << "Erro!! Opção inválida!" << endl;
    return 0;
  }
  return 0;
}