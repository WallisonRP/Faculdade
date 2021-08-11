/* 5 - Sabe-se que:
• 1 pé = 12 polegadas
• 1 jarda = 3 pés
• 1 milha = 1760 jardas
 Faça um programa que receba uma medida em pés e converta para jardas e milhas.*/

#include <iostream>

using namespace std;

int main() {
  float medida;

    cout << "Digite a medida em pés." << endl;
    cin >> medida;



  cout << "-------- Resultado --------" << endl;
  cout << "Medida em Pés: " << medida << endl;
  cout << "Medida em Jardas:" << medida / 3 << endl;
  cout << "Medida em Milhas:" << medida / (3 * 1760) << endl;
  cout << "---------------------------" << endl;

  return 0;
}