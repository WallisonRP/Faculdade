/*6 - Um determinado material radioativo perde metade de sua massa a cada 50 segundos. 

Dada a massa inicial, em gramas, fazer um algoritmo que determine o tempo necessário para que essa massa se torne menor do que 0,5 grama. 
Escreva a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float massa, massaf, massa1, massai, horaf, minutos;
  int seg;

  massai = 0;
  seg = 0;
  cout << "Digite a massa do material" << endl;
  cin >> massa1;
  massai = massa1;
  massa = massa1;
  
  do {

    massa = massa / 2;
    seg = seg + 50;
    massaf = massa;  

  } while (massa >= 0.5);
  
  cout << fixed << setprecision(2);
  minutos = seg / 60;
  horaf = minutos / 60;

  cout << "Total de horas: " << horaf << endl;
  cout << "Total de minutos: " << minutos << endl;
  cout << "Total de seg: " << seg << endl;
  cout << "Massa inicial: " << massai << " g" << endl;
  cout << "Massa final: " << massaf << " g" << endl;

  return 0;
}