/* Exercício - 14 - Dada a função f definida por... */


#include <iostream>

using namespace std;

int main() {
  float x, f;

  cout << "Digite o valor de 'x': " << endl;
  cin >> x; 


  if (x < 1) {
    f = 4 - (x * x);
  }

  else if ( x == 1){
    f = 2;
  }

  else if (x > 1) {
    f = 2 + (x * x);
  }

  cout << "O f(x) é: " << f << endl;

  return 0;
}