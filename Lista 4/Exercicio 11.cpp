#include <iostream> 

using namespace std;

int main() {
  int i, codC, numVagas, numMas, numFem, somaC, maiorC, maior_cpv, total;
  float cand_pv, percF;
  char continuar;

  maior_cpv = 0;
  i = 0;
  total = 0;

  do {
    cout << "Codigo do curso: " << endl;
    cin >> codC;

    cout << "Número de vagas: ";
    cin >> numVagas;

    cout << "Número de candidatos do sexo masculino: ";
    cin >> numMas;

    cout << "Número de candidatos do sexo feminino: ";
    cin >> numFem;

    cand_pv = (numMas + numFem) / numVagas;
    
    percF = numFem * 100 / (numMas + numFem);

    total += (numMas + numFem);

    if (i == 0){
      maiorC = codC;
      maior_cpv = cand_pv;
    }

    if (cand_pv > maior_cpv) {
      maior_cpv = cand_pv;
      maiorC = codC;
    }

    cout << "Código do curso: " << codC << endl;
    cout << "Número de candidatos por vaga: " << cand_pv << endl;
    cout << "Percentual de candidatos do sexo feminino: " << percF << "% " << endl;

    cout << "Deseja adicionar mais? (Sim) ou (Não) ";
    cin >> continuar;
    i++;

  } while (continuar == 'S' | continuar == 's');

  cout << "----------------------------------" << endl;
  cout << "Curso com maior quantidade de candidatos: " << maiorC << endl;
  cout << "Quantidade de candidatos por vaga: " << maior_cpv << endl;
  cout << "Total de candidatos: " << total << endl;

  return 0;

}