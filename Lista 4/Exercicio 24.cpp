#include <iostream>

using namespace std;

int main() {
  float i, j, s, sub, r;
  int k;


  j = s = k = 0;
  for (i = 1; i <= 10; i++){
    k++;
    j = i * i;
    cout << i << " ÷ " << j << " = " << i / j << endl;
  
      if (k % 2 == 1) {
        s += i / j;
      } else if (k % 2 == 0) {
        s -= i / j;
      }
  }
  
  cout << "Soma total: "<< s << endl;
  
  return 0;

}

