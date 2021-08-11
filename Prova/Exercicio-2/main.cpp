//Nome: Wallison Franklin Pereira
//R.A: 2840482111012

#include <iostream>
#include <string>

using namespace std;

int main() {
  //Declaração de variáveis
  int i, numero, primo, tot_Primos = 0, tot_Multiplos = 0;
  char saida;
  string mensagem_Primos ;


do{ //Loop para inserção de múltiplos valores
  primo = 0;
  cout << "Digite um valor: ";
  cin >> numero;
  cout << "\n";

//Condição que verifica números múltiplos de 3 dentre TODOS os números inseridos
  if (numero % 3 == 0)
    tot_Multiplos += 1;

//Estrutura de repetição para determinar se um número é primo ou não
  for (i = 2; i <= numero / 2; i++){
      if (numero % i == 0){
        primo++;
        break;
      }
  }

//Exibição e contador de números primos
//A variável mensagem_Primos acumula os números primos em si mesma para exibição final
  if (primo == 0) {
    cout << "O numero " << numero << " é primo!\n\n";
    tot_Primos++;
    mensagem_Primos += to_string(numero) + " ";
  } else cout << "O numero " << numero << " não é primo!\n\n";


//Condição de saída
  cout << "Deseja continuar? \n";
  cout << "  [S]Sim [N]Não  ";
  cin >> saida;
  cout << "\n";
} while (saida == 's' || saida == 'S');

//Mensagem final, exibe o total de múltiplos de 3, o total de números primos inseridos
//E exibe quais números primos foram inseridos
cout << "Total de múltiplos de 3: " << tot_Multiplos << endl;
cout << "Total de números primos: " << tot_Primos << endl;
cout << "Os números primos inseridos foram: " << mensagem_Primos << endl;
  return 0;
}