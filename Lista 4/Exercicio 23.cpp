#include <iostream>

using namespace std;

int main() {
  float i, j = 38, k = 37, s = 0;

  for (i = 1; i <=37; i++) {
    s += (k * j) / i;
    cout << k << " x " << j << " ÷ " << i << " = " << (k * j) / i << endl;

    k--;
    j--;
  }

  cout << "Soma total: " << s << endl;

  return 0;

}