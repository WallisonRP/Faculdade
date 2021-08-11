/* 13 - Faça um algoritmo que, dado o valor total em reais e o número de prestações desejadas, calcule o valor de cada prestação. O número mínimo de prestações deve ser 12. Se o número de prestações for maior ou igual a 24, adicione 10% de juros ao valor total, se for maior ou igual a 36, adicione 15% de juros ao valor total.*/

#include <iostream>

using namespace std;

int main() {
  float valor, prest, parcelas;

  cout << "Digite o valor total da compra : " << endl;
  cin >> valor;

  cout << "Digite o número de prestações: " << endl;
  cin >> prest;

  if (prest <= 12) {
    cout << "Sua compra deve ser à vista!" << endl;
    return 0;

  }

  if (prest > 12 && prest < 24) {
    cout << "O valor total da compra é: " <<  valor << endl;
    cout << "Sua compra foi dividida em: " << prest << " parcelas!" << endl;
    return 0;
  }

  if (prest >= 24 && prest <= 35) {
    valor = valor * 1.10;
  }

  if (prest >= 36) {
    valor = valor * 1.15;
  }

  parcelas = valor / prest;

 cout << "O valor total com juros é: " <<  valor << endl;
 cout << "Sua compra foi dividida em: " << prest << " parcelas!" << endl;

return 0;

}