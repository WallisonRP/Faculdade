/* 8 - Faça um programa que leia 2 números representando os lados de um retângulo, calcule e imprima 0 se tais lados formares um quadrado, caso contrário imprima qualquer outro valor. */

#include <iostream>

using namespace std;

int main() {
  float preco_Normal, preco_Final, juros, desconto;
  int cond_Pag, parcelas;

  cout << "--------------CAIXA--------------" << endl ;
  cout << "Valor do Produto: ";
  cin >> preco_Normal;
  cout << "--------Forma De Pagamento-------" << endl;
  cout << "\t(1) - À vista" << endl;
  cout << "\t(2) - À vista no crédito" << endl;
  cout << "\t(3) - 2 parcelas sem juros" << endl;
  cout << "\t(4) - 3 parcelas" << endl;
  cin >> cond_Pag;

  switch (cond_Pag) {
    case 1: 
            desconto = 0.1;
            break;
    case 2: 
            desconto = 0.15;
            break;
    case 3: 
            parcelas = 2;
            break;
    case 4:
          juros = 0.1;
          parcelas = 3;
          break;
    default:
          cout << "Opção inválida. Tente novamente!" << endl;
  }

  preco_Final = preco_Normal - (preco_Normal * desconto) + (preco_Normal * juros);

  cout << "------Total a pagar------" << endl;
  cout << "Preço R$ " << preco_Normal << endl;
  if (desconto > 0)
    cout << "Desconto " << desconto * 100 << "%" << endl;
  if (juros > 0)
    cout << "Juros: " << juros * 100 << "%" << endl;
  if (parcelas > 0)
    cout << "Parcelas: " << juros * 100 << "%" << endl;
    cout << "no valor: R$ " << preco_Final / parcelas << endl;
    
  cout << "Total R$ " << preco_Final << endl;
  cout << "---------" << endl;

  return 0;
}

