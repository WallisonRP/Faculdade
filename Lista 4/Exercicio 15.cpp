/*

15)Os bancos atualizam diariamente as contas de seus clientes. Essa atualização envolve a análise dos depósitos e retiradas de cada conta. Numa conta de balanço mínimo, uma taxa de serviço é deduzida se a conta cai abaixo de uma certa quantia especificada. 

Suponha que uma conta particular comece o dia com um balanço de R$ 60,00. 

O balanço mínimo exigido é R$ 30,00 e se o balanço de fim de dia for menor do que isso, uma taxa é reduzida da conta. 

A fim de que essa atualização fosse feita utilizando computador, é fornecido o seguinte conjunto de dados:

•a primeira linha contém o valor do balanço mínimo diário, quantidade de transações e taxa de serviço;
•as linhas seguintes contém número da conta, valor da transação e código da transação (depósito ou retirada);
Escrever um algoritmo que:
•calcule o balanço (saldo/débito) da conta ao fim do dia (se o resultado for negativo, isto significa insuficiência de fundos na conta);
•escreva, para cada conta, o seu número e o balanço calculado. Se não houver fundos, imprima o número da conta e a mensagem “NÃO HÁ FUNDOS”.

*/

#include <iostream>

using namespace std;

int main() {
  int count;
  float saldo = 60, min = 30, valor = 0, valorFinal = 0, numConta = 0;
  char opr;

  cout << "Insira o número da conta: ";
  cin >> numConta;

  count = 0;
  
  do {
    
    cout << "Deseja fazer que tipo de operação? " << endl;
    cout << "(D) = Depósito " << endl;
    cout << "(S) = Saque " << endl;
    cout << "(F) = Finalizar operação" << endl;
    cin >> opr;

    switch (opr) {

      case 'D' | 'd':
        cout << "Quanto deseja depositar? " << endl;
        cin >> valor;
        valorFinal = saldo + valor;
        count += 1;
        break;

      case 'S' | 's':
        cout << "Quanto deseja sacar? " << endl;
        cin >> valor;

        if (valor > valorFinal) {
          cout << "SALDO INSUFICIENTE!!!" << endl;
        }
        else
          valorFinal -=  valor;
          count += 1;
        break;

      case 'f' :
        cout << "Operação finalizada " << endl;
        break;
      case 'F' :
        cout << "Operação finalizada " << endl;
        break;
    }
  } while (opr != 'f' && opr != 'F' );

  if (valorFinal < 30)
      cout << "Você terá taxas reduzidas" << endl;

  cout << "Número da conta: " << numConta << endl;
  cout << "Número de operações realizadas: " << count << endl;
  cout << "Saldo presente na conta: R$" << valorFinal << endl;

  return 0;

}