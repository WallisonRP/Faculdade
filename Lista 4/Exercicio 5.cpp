/*
5 - Supondo que a população de um país A seja da ordem de 9.000.000 de habitantes com uma taxa anual de crescimento de 3% e que a população de um país B seja, aproximadamente, de 20.000.000 de habitantes com uma taxa anual de crescimento de 1,5%, fazer um algoritmo que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas essas taxas de crescimento.
*/

#include <iostream>

using namespace std;

int main() {
  long paisA, paisB;
  int ano;

  paisA = 9000000;
  paisB = 20000000;
  
  do {
    ano++;

    paisA = paisA * 1.03;
    paisB = paisB * 1.015;

  } while (paisA <= paisB);

  cout << "Demorou " << ano << " anos, para que o país A ultrapassasse o país B em população" << endl;
  cout << "Agora o país A possui " << paisA << endl;
  cout << "Agora o país B possui " << paisB << endl;
  
  return 0;
  
}