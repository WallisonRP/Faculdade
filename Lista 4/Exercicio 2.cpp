/*2 - Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 50 pessoas. Fazer um algoritmo que calcule e escreva:
• a maior e a menor altura do grupo;
• a média de altura das mulheres;
• o número de homens;*/

#include <iostream>

using namespace std;

int main() {
  float altura, taltura, maior, menor, aux;
  int homens, i;
  char sexo, saida;

  taltura = homens = maior = menor = aux = i = 0;

  do {
    i ++;
    cout << "Qual a altura da " << i << "ª pessoa?" << endl;
    cin >> altura;
    aux = altura;
 
    cout << "Qual o sexo da " << i << "ª pessoa?" << endl;
    cout << "[F] Feminino" << endl;
    cout << "[M] Masculino" << endl;
    cin >> sexo;

    

    if (altura > maior){
      maior = altura;
    }  
    menor = maior;
    if (menor < altura){
      menor = altura;
    }

    if (aux < menor){
      menor = altura;
    }

    if (sexo == 'f' || sexo == 'F') {
      taltura = taltura + altura;

    } else if (sexo == 'm' || sexo == 'M') {
      homens = homens + 1;
    }

  } while (i <= 2);

  cout << "Menor altura: " << menor << endl;
  cout << "Maior altura: " << maior << endl;
  cout << "Total de homens: " << homens << endl;
  cout << "Média de altura das mulheres: "<< taltura / i << endl;

  return 0;
}