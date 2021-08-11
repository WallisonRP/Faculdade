/* 3 - Faça um programa que receba dois números e mostre o menor*/

#include <iostream>

using namespace std;

int main() {
  float n1, n2;

  cout << "Digite dois números, o programa mostrará qual é o menor." << endl;
  cin >> n1 >> n2;

  if (n1 < n2) {
    cout << "O menor número inserido foi : " << n1 << endl;
  }

  if (n2 < n1) {
    cout << "O menor número inserido foi : " << n2 << endl;
  }

  
}