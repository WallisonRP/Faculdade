/* 2 - Faça um programa que receba duas notas, calcule e mostre a média aritmética e a 
mensagem de acordo com a tabela abaixo. 

Média Mensagem
[0,3) Reprovado
[3,7) Exame
[7,10] Aprovado

*/



#include <iostream>

using namespace std;
float nota1, nota2, media;


int main() {
  cout << "Digite a primeira nota" << endl;
  cin >> nota1;
  
  cout << "Digite a segunda nota" << endl;
  cin >> nota2;
  
  media = (nota1 + nota2)/2;
  
if (media > 0 && media < 3 ) {
  cout << "Aluno reprovado!" << endl;
  cout << "Sua média foi: " << media << endl;
}

 if (media >= 3 && media < 7){
  cout << "O aluno está de recuperação!" << endl;
  cout << "Sua média foi: " << media << endl;
}

if (media >= 7 && media <= 10) {
  cout << "Parabéns, o aluno foi aprovado!!" << endl;
  cout << "Sua média foi: " << media << endl;
}

}