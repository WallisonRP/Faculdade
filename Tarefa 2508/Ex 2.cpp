#include <iostream>

using namespace std;

int main() {
  float nota1, nota2, media;

  cout << "Digite a primeira nota: \n";
  cin >> nota1;
  cout << "Digite a segunda nota: \n";
  cin >> nota2;

  media = (nota1 + nota2) / 2;

  if (media >= 6) {
    cout << "Parabéns, o aluno foi aprovado!";
  } else if (media >= 3 && media < 6) {
    cout << "O aluno está abaixo da média e precisa fazer um exame adicional.";
  } else if (media < 3) {
    cout << "Que pena, o aluno foi reprovado.";
  }
}