/*

18)A comissão organizadora de um rallye automobilístico decidiu apurar os resultados da competição através de um processamento eletrônico. 
Um dos algoritmos necessários para a classificação das equipes concorrentes é o que emite uma listagem geral do desempenho das equipes, atribuindo pontos segundo determinadas normas: 
O algoritmo deverá: 

A.Ler:A.1)uma linha contendo os tempos-padrão (em minutos decimais) para as três fases de competição;

A.2)um conjunto de linhas contendo cada uma o número de inscrição da equipe e os tempos (em minutos decimais) que as mesmas despenderam ao cumprir as três diferentes etapas. A última linha (flag), que não entrará nos cálculos, contém o número 9999 como número de inscrição.

B.Calcular:
B.1) os pontos de cada equipe em cada uma das etapas, seguindo o seguinte critério. Seja ∆ o valor absoluto da diferença entre o tempo-padrão (lido na primeira linha) e o tempo despendido pela equipe numa etapa
•∆ < 3 minutos – atribuir 100 pontos à etapa
•3 <= ∆ <= 5 minutos – atribuir 80 pontos à etapa
•∆ > 5 minutos – atribuir 80 – (∆ - 5)/5 pontos à etapa
B.2)o total de pontos de cada equipe nas três etapas;
B.3)a equipe vencedora.C.Escrever:
C.1)para cada equipe, o número de inscrição, os pontos obtidos em cada etapa e o total de pontos obtidos.

*/

#include <iostream>

using namespace std;

int main() {
  float padrao1, padrao2, padrao3, tempoPadrao, tempo, tempoPontuacao, pontos = 0, pontosTotal = 0, pontosMax = -1;
  int inscricao, i = 1, winner;



  cout << "Digite os tempos-padrão das etapas." << endl;
  cin >> padrao1 >> padrao2 >> padrao3;

  cout << "Qual número de inscrição da equipe?" << endl;
  cin >> inscricao;


  while (inscricao != 9999){
    
    for (i = 1; i <= 3; i++){
      cout << "Qual o tempo da " << i << "° da equipe " << inscricao << endl;
      cin >> tempo;
        switch (i){
          case 1: tempoPadrao = padrao1; break;
          case 2: tempoPadrao = padrao2; break;
          case 3: tempoPadrao = padrao3; break;
        }

      tempoPontuacao = tempo - tempoPadrao;
      
      if (tempoPontuacao < 3){
        pontos = 100;
      }
      if (tempoPontuacao >= 3 && tempoPontuacao <= 5){
        pontos = 80;
      }
      if (tempoPontuacao > 5){
        pontos = 80 - ((tempoPontuacao - 5)/5);
      }

      cout << "A equipe " << inscricao << " fez " << pontos << " pontos na etapa" << i << endl;

      pontosTotal += pontos;
    }


    if (pontos > pontosMax){
      pontosMax = pontosTotal;
      winner = inscricao;
    }

    cout << "Qual número de inscrição da equipe?" << endl;
    cin >> inscricao;
  }

  cout << "A equipe vencedora foi: " << winner << endl;
  cout << "Pontuação: " << pontosMax << "pontos." << endl;

  return 0;

}