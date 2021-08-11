/*

13) Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia elétrica em uma
determinada cidade. Para isso, são fornecidos os seguintes dados:

1) preço do kWh consumido;

2) número do consumidor;

3) quantidade de kWh consumidos durante o mês;

4) código do tipo de consumidor (residencial, comercial, industrial).
O número do consumidor igual a zero deve ser usado como flag. Fazer um algoritmo que:
• leia os dados descritos acima:
• calcule:

a) para cada consumidor, o total a pagar;
b) o maior consumo verificado;
c) o menor consumo verificado;
d) o total do consumo para cada um dos três tipos de consumidores;
e) a média geral de consumo;

• escreva:
a) para cada consumidor, o seu número e o total a pagar;
b) o que foi calculado nos itens b, c, d, e acima especificados.

*/


#include <iostream>

using namespace std;

int main() {

  float media, soma, precoC, total, pagar;
  char cod_Consumidor;
  int NumC, i, qtd, MaiorC, menorC, codC, codI, codR;

  menorC = 10.000;
  MaiorC = 0;
  media = 0;
  soma = 0;
  precoC = 0;
  total = 0;
  NumC = 0;
  qtd = 0;
  codC = 0;
  codR = 0;
  codI = 0;
  i = 0;

  do {

    cout << "Insira o número do consumidor: ";
    cin >> NumC;

    if(NumC == 0) {

      return 0;

    }

    cout << "Insira o preço do kWh: ";
    cin >> precoC;

    cout << "Consumo mensal de kWh: ";
    cin >> qtd;

    cout << "Codigo do consumidor: " << endl;
    cout << "\t Tipo (R)" << endl;
    cout << "\t Tipo (C)" << endl;
    cout << "\t Tipo (I)" << endl;
    cin >> cod_Consumidor;

    pagar = (precoC * qtd);
    total = pagar;

    cout << "Consumidor: " << NumC << endl;
    cout << "Valor à ser pago: " << total << " R$." << endl;

    if (qtd > MaiorC)

      MaiorC = qtd;

    if (qtd < menorC)

      menorC = qtd;

    switch (cod_Consumidor) {

      case 'R' | 'r':
        codR += qtd;
        break;

      case 'C' | 'c':
        codC += qtd;
        break;

      case 'I' | 'i':
        codI += qtd;
        break;
      
      default:
        cout << "Insira um tipo válido!!!" << endl;

    }

    i++;
    soma += qtd;
    media = (float)soma / i;

  } while (NumC != 0);

  cout << "Menor consumo: " << menorC << endl;
  cout << "Maior consumo: " << MaiorC << endl;
  cout << "Média: " << media << endl;
  cout << "Consumo industrial: " << codI << endl;
  cout << "Consumo comercial: " << codC << endl;
  cout << "Consumo residencial: " << codR << endl;

  return 0;

}

