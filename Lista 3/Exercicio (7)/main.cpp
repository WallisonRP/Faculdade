/* 7 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro. */

#include <iostream>

using namespace std;

int main() {
  int estado;
  float porcentagem, valor;
  
  cout << "Digite o estado da venda conforme indicado abaixo" << endl;
  cout << "[1] Minas Gerais " << endl;
  cout << "[2] São Paulo" << endl;
  cout << "[3] Rio de Janeiro" << endl;;
  cout << "[4] Mato Grosso do Sul" << endl;

  cin >> estado;
  
  cout << "Informe o valor do produto" << endl;
  cin >> valor;

  
  switch (estado) {
    case 1: 
      porcentagem = 1.07;
      valor = valor * porcentagem;
      break;

    case 2:
      porcentagem = 1.12;
      valor = valor * porcentagem;
      break;

    case 3:
      porcentagem = 1.15;
      valor = valor * porcentagem;
      break;

    case 4:
      porcentagem = 1.08;
      valor = valor * porcentagem;
      break;
    
    default:
      cout << "Destino inválido, tente novamente!" << endl;
      return 0;
  }

  

  cout << "Preço final: R$" << valor << endl;

  return 0;
}