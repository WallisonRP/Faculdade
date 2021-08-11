#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float i, j, k = 50, r = 0;

  for (i = 1; i <= 50; i++){
    j = pow(2,i);
    cout << "2 ^  " << i << " ÷ " << k << " = "<< (j / k) << endl;
    k--;
    r += j/k;
  } 

  cout << "Soma total: " << r << endl;

  return 0;

}