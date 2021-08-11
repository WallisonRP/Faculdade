/*Foi feita uma pesquisa de audiencia de canal de TV em varias casas de uma certa cidade, num determinado dia. Para cada casa visitada, fornecido o numero do canal (4,5,7,12) e o numero de pessoas que o estavam assistindo naquela casa. Se a televisao estivesse desligada, nada era anotado, ou seja, esta casa nao entrava na pesquisa. Fazer um algoritmo que:
• leia um numero indeterminado de dados, sendo que o “FLAG” corresponde ao número do
canal igual a zero;
• calcule a porcentagem de audiência para cada emissora; */




#include <iostream>

using namespace std;

int main() {
  int canal_4 = 0, canal_5 = 0, canal_7 = 0, canal_12 = 0, resposta = 0;
  float numeroPessoas4 = 0, numeroPessoas5 = 0, numeroPessoas7 = 0, numeroPessoas12 = 0, totalPessoas = 0, total4 = 0, total5 = 0, total7 = 0, total12 = 0;
  char continuar;

  do{

    cout << "Qual o canal está sendo assistido ?" << endl;
    cin >> resposta;
      switch (resposta) {
        case 4:
          canal_4 += 1; // contador numero de televisão neste número
          cout << "Quantas pessoas estão assistindo televisão ?" << endl;
          cin >> numeroPessoas4;
          total4 += numeroPessoas4; //total pessoas assistindo canal 4
        break;

        case 5:
          canal_5 += 1; // contador numero de televisão neste número
          cout << "Quantas pessoas estão assistindo televisão ?" << endl;
          cin >> numeroPessoas5;
          total5 += numeroPessoas5; //total pessoas assistindo canal 5
        break;

        case 7:
          canal_7 += 1; // contador numero de televisão neste número
          cout << "Quantas pessoas estão assistindo televisão ?" << endl;
          cin >> numeroPessoas7;
          total7 += numeroPessoas7; //total pessoas assistindo canal 7
        break;
        
        case 12:
          canal_12 += 1; // contador numero de televisão neste número
          cout << "Quantas pessoas estão assistindo televisão ?" << endl;
          cin >> numeroPessoas12;
          total12 += numeroPessoas12; //total pessoas assistindo canal 12
        break;

        default:
          cout << "Canal inválido" << endl;
      }

    
    cout << "Deseja continuar ?" << endl; // saída do loop
    cin >> continuar;
    
  } while (continuar == 's' || continuar =='S');

  //contador do total geral de pessoas
  totalPessoas = (numeroPessoas4 + numeroPessoas5 + numeroPessoas7 +numeroPessoas12);

  //saída dos dados
  cout << "A audiência do canal 4 é de " << (numeroPessoas4/totalPessoas)* 100 << "%. Tem " << canal_4 << " tv(s) ligada(s) neste canal  e " << total4 << " pessoas assistindo." << endl;
  cout << "A audiência do canal 5 é de " << (numeroPessoas5/totalPessoas)* 100 << "%. Tem " << canal_5 << " tv(s) ligada(s) neste canal  e " << total5 << " pessoas assistindo." << endl;
  cout << "A audiência do canal 7 é de " << (numeroPessoas7/totalPessoas)* 100 << "%. Tem " << canal_7 << " tv(s) ligada(s) neste canal  e " << total7 << " pessoas assistindo." << endl;
  cout << "A audiência do canal 12 é de " << (numeroPessoas12/totalPessoas)* 100 << "%. Tem " << canal_12 << " tv(s) ligada(s) neste canal  e " << total12 << " pessoas assistindo." << endl;
 
  return 0;

}