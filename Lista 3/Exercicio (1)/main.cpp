/* 1 - Faça um programa que receba quatro notas de um aluno, calcule e mostre a média 
aritmética, por fim escreva se ele foi aprovado ou reprovado, considerando que para ser 
aprovado a média deverá ser maior ou igual à 7,0. */

#include <iostream>

using namespace std;

int main() {
  float nota1, nota2, nota3, nota4, media;
  string nome;
  
  cout << "Digite o nome do aluno" << endl;
  cin >> nome;
  
  cout << "Digite as notas do " << nome << "." << endl;
  cin >> nota1 >> nota2 >> nota3 >> nota4;
  
  media = (nota1 + nota2 + nota3 + nota4)/4;


  if (media >= 7) {
    cout << "Parabéns o aluno " << nome << " foi aprovado!" << endl;
    cout << "Sua média foi: " << media << endl;
  }
  else 
    cout << "Que pena, o aluno foi reprovado. :( " << endl;
    cout << "Sua média foi: " << media << endl;

    return 0;
}