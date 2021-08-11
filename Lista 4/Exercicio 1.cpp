/*1 - Fazer um algoritmo que:
• Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo.
• A última linha que não entrará nos cálculos, contém o valor da idade igual a zero
• Calcule e escreva a idade média deste grupo de indivíduos.*/

#include <iostream>

using namespace std;

int main() {
  char saida;
  int contador;
  float idade, media, teste;

  contador = 0;
  idade = teste = 0;

  do {
    cout << "Digite a idade do " << contador + 1 << "° indivíduo." << endl;
    cin >> idade;

    teste = teste + idade;
    contador = contador + 1;
 

    cout << "Deseja finalizar a contagem?" << endl;
    cin >> saida;
  } while (saida == 'N' || saida == 'n');

  media = teste / contador;

  cout << "A media da idade dos " << contador << " indivíduos é de: " << media << endl ;
 
 return 0;
}