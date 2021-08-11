//Nome: Wallison Franklin Pereira
//R.A: 2840482111012

#include <iostream>

using namespace std;

int main() {
  //Declaração de variáveis
  float ativo, cotacao1, cotacao2, cotacao3, media_cotacao1, media_cotacao2, media, maior, menor, aux;
  int t_baixa, t_alta;
  char saida;

  //Iniciação de variáveis
  t_baixa = t_alta = maior = menor = 0;


  do {  //Estrutura de repetição para verificação de múltiplos ativos
  cout << "Digite o ID do ativo: " ;
  cin >> ativo;
  cout << endl;

  //Inserção da cotação de um ativo nos últimos 3 dias
  cout << "Digite a cotação do ativo " << ativo << " dos últimos 3 dias: \n" ;
  cin >> cotacao1 >> cotacao2 >> cotacao3;


  //Calculo da média/variação das cotações para saber qual ativo é mais lucrativo ou prejudicial
  media_cotacao1 = cotacao3 - cotacao2;
  media_cotacao2 = cotacao2 - cotacao1;
  media = media_cotacao1 / media_cotacao2; 

  //Condição que verifica qual foi o ativo mais lucrativo ou prejudicial
  if (maior < media)
    maior = ativo;
  
   if (menor > media){
    menor = ativo;
    aux = menor;
  }

  if (aux < media)
    menor = ativo;

  //Verificação para saber se um ativo está em alta ou em baixa
  //Neste exemplo para saber se está em alta ou em baixa, resolvi fazer uma comparação //entre os 2 ultimos dias e o primeiro.
  if (cotacao3 > cotacao1 && cotacao2 > cotacao1) {
    cout << "O ativo está em alta!\n" << endl;
    t_alta += 1;
  }

  if (cotacao3 < cotacao1 && cotacao2 < cotacao1) {
    cout << "O ativo está em baixa!" << endl;
    t_baixa += 1;
  }


  //Condição de saída
  cout << "Deseja verificar outro ativo?\n";
  cout << "       [S]Sim [N]Não         \n" << endl;
  cin >> saida;
  } while (saida == 's' || saida == 'S');

  //Mensagem final exibindo os dados dos ativos.
  cout << "Existem " << t_alta << " ativos em alta!" << endl;
  cout << "Existem " << t_baixa << " ativos em baixa" << endl;
  cout << "O ativo mais lucrativo é o de Nº " << maior << endl;
  cout << "O ativo mais prejudicial é o de Nº " << menor << endl;



  return 0;
}




































/*

  if (cotacao1 > cotacao2 && cotacao1 > cotacao3){
      maior = cotacao1;
  }  else if (cotacao2 > cotacao1 && cotacao2 > cotacao3){
           maior = cotacao2;
     }  else if (cotacao3 > cotacao1 && cotacao3 > cotacao2){
             maior = cotacao3;
        }


  cout << "O ativo mais lucrativo foi " << ativo << endl;
  */