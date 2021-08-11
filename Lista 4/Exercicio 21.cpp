#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float S, i, j = 0;
  
  for (i = 1 ; i < 100 ; i += 2){
    j++;
    S += (i / j);
  }

  cout << "O valor de S é: " << fixed << setprecision(3) << S << endl;
  
  return 0;

}