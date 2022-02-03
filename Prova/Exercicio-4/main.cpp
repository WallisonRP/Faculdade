
#include <iostream>
#include <cmath>

//O "define" está servindo para controlar o tamanho das entradas
#define LIMITE 500
using namespace std;

int main() {
  //Declaração e inicialização de variáveis.
  int c = 0, i, fatorial, total = 1, exp, cont;
  long double resultado = 0, expoente[LIMITE], fat[LIMITE];

  //o vetor "expoente" armazena a parte de cima da equação
  //o vetor "fat" armazena o resultado de cada fatorial da parte de baixo da equação

//Calculo dos exponenciais
  for (cont = 0; cont < LIMITE; cont++) {
    expoente[cont] = pow(2, cont);
  }


  //Calculo dos fatoriais

  //Essa estrutura usa a variável fatorial começando em 1 (c+1) e vai até o nosso LIMITE
  //Dessa forma ele faz o fatorial de cada número e assim armazena no vetor "fat" para o //calculo final

  for (c = 0; c < LIMITE; c++) {
    fatorial = c + 1;
    total *= fatorial;
    fat[c] = total;
  }

  //Calculo do resultado final
  for (i = 0; i < LIMITE; i++){
    resultado += expoente[i] / fat[i];
  }

  //Impressão do resultado
  cout << "S = " << resultado << endl;
  
  //O resultado final está sendo impresso como inf/infinito no replit, não consegui usar outro software para fazer os outros exercícios, mas com números menores o resultado se mostra eficiente, fiz os testes com calculos manuais e  bate com o calculo do algorítmo.
  return 0;

}



