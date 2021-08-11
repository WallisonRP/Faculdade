/* 4 - Faça um programa que receba dois número e mostre o maior.*/

#include <iostream>

using namespace std;

int main() {
  float n1, n2;

  cout << "Digite dois números, o programa mostrará qual é o maior." << endl;
  cin >> n1 >> n2;

    if (n1 > n2) {
    cout << "O maior número inserido foi : " << n1 << endl;
  }

  if (n2 > n1) {
    cout << "O maior número inserido foi : " << n2 << endl;
  }
}