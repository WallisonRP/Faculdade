/* 11 - Faça e um programa que, dados três números inteiros, os imprima em ordem crescente. */

#include <iostream>

using namespace std;

int main() {
  float n1, n2, n3, aux;

  cout << "Digite 3 valores" << endl;
  cin >> n1 >> n2 >> n3;


  if (n1 > n2){
    aux = n1;
    n1 = n2;
    n2 = aux;
  }

  if (n1 > n3){ 
    aux = n1;
    n1 = n3;
    n3 = aux;
  }

  if (n2 > n3){
    aux = n2;
    n2 = n3;
    n3 = aux;
  }

  cout << "A ordem crescente é: " << n1 << n2 << n3 << endl;
    
  
  return 0;
}