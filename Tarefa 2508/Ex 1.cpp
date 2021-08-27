#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int a, b, c, delta;
  double x1, x2, deltaRaiz; 

  cout << "\n\nComo resolver equação do segundo grau\n";
  cout << "Modelo de equação do segundo grau: \n";
  cout << "a.x² + b.x + c = 0\n\n";

  cout << "Para resolver a equação precisamos calcular o valor do delta(∆)\n"; 
  cout << "e depois utilizar a fórmula de Bhaskara.\n\n";

  cout << "* * Fórmula do Delta (∆) * *\n";
  cout << "∆ = b² - 4.a.c\n";
  cout << "_________________________________\n";

  cout << "* * Fórmula de Bhaskara * *\n";
  cout << "x = -b ± √∆\n";
  cout << "------------\n";
  cout << "    2.a      \n";
  cout << "_________________________________\n\n";


  cout << "Insira os valores de a, b e c: \n";
  cin >> a >> b >> c;
  delta = b * b - 4 * a * c;
  deltaRaiz = sqrt(delta);
  b = -b;

  if (delta < 0) {
    cout << "Não é possível calcular a raiz de números negativos e o programa será encerrado. \nTente novamente com outro valor!";
    return 0;
  }

  cout << "\n\nx = " << b << " ± " << sqrt(delta) << "\n";
  cout << "--------------\n";
  cout << "      " << 2 * a << "\n\n";

  cout << "X¹ = " << b << " + " << sqrt(delta) << "\n";
  cout << "--------------\n";
  cout << "      " << 2 * a << "\n\n";

  cout << "X¹ = " << (b + sqrt(delta)) / (2 * a);

  cout << "\n\nX² = " << b << " - " << sqrt(delta) << "\n";
  cout << "--------------\n";
  cout << "      " << 2 * a << "\n\n";

  cout << "X² = " << (b - sqrt(delta)) / (2 * a);

  return 0;
  
}