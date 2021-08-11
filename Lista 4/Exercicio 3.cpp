/*A conversão de graus Farenheit para centígrados é obtida por
C = 5 . (F − 32)
    9
 Fazer um algoritmo que calcule e escreva uma tabela de centígrados em função de graus Farenheit, que variam de 50 a 150 de 1 em 1.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float convert, i;
  i = 49;
  
  do {
    i = i + 1;

    cout << fixed << setprecision(2);
    convert = (i - 32) * 5 / 9;
  
    cout << i << " Graus Farenheit = " << convert << " Graus Celsius. " << endl;
  
  } while (i >= 50 && i < 150);

  return 0;

}