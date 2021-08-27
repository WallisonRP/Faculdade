#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float nota, media, contador = 1, acumulador = 0, saida = 0;

  do {
    cout << "Digite a " << contador << "° nota.\n";
    cin >> nota;
    acumulador += nota;

    contador++;
    cout << "Deseja sair do programa? [1]Continuar, [2]Sair\n";
    cin >> saida;
  } while (saida != 2);

  media = acumulador / contador;

  cout << "A média final final é " << fixed << setprecision(2) << media;
}