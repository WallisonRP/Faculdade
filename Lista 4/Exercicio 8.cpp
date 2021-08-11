/*

8 - Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta (sim ou não). Sabendo-se que foram entrevistadas 2.000 pessoas, fazer um algoritmo que calcule e escreva:
• o número de pessoas que responderam sim;
• o número de pessoas que responderam não;
• a porcentagem de pessoas do sexo feminino que responderam sim;
• a porcentagem de pessoas do sexo masculino que responderam não;

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int i = 0, people = 0, sim = 0, nao = 0, fem = 0, mas = 0;
  float fsim = 0, mnao = 0;
  char sexo, resp;

  do {
    people++;
    
    cout << "Digite o sexo " << people << "º entrevistado(a)." << endl;
    cin >> sexo;

    cout << "O " << people << "º entrevistado(a) gostou do novo produto?" << endl;
    cin >> resp;

    if (resp == 's' || resp == 'S') 
      sim += 1;
    if (sexo == 'f' || sexo == 'F') 
      fsim += 1;
    else if (resp == 'n' || resp == 'N') 
      nao += 1;
    if(sexo == 'm' || sexo == 'M')
      mnao += 1;

  } while(people < 3);

  cout << "Total de pessoas que responderam sim: " << sim << endl;
  cout << "Total de pessoas que responderam não: " << nao << endl;
  cout << fixed << setprecision(2);
  cout << "Porcentagem do sexo feminino que responderam sim: " << (fsim / people) << endl;
  cout << "Porcentagem do sexo masculino que responderam não: " << (mnao / people);
  
  return 0;

}