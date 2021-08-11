/*

12) O sistema de avaliação de uma determinada disciplina obedece aos seguintes critérios:

• durante o semestre são dadas três notas;

• a nota final é obtida pela média aritmética das notas dadas durante o curso;

• é considerado aprovado o aluno que obtiver a nota final superior ou igual a 60 e que tiver
comparecido a um mínimo de 40 aulas. Fazer um algoritmo que:

a) Leia um conjunto de dados contendo o número de matrícula, as três notas e a
frequência (número de aulas frequentadas) de 100 alunos.

b) Calcule:

1. a nota final de cada aluno;
2. a maior e menor nota da turma;
3. a nota média da turma;
4. o total de alunos reprovados;
5. a porcentagem de alunos reprovados por infrequência;
c) Escreva:
• para cada aluno, o número de matrícula, a frequência, a nota final e o código
(aprovado ou reprovado);
• o que foi calculado no item b (2,3,4 e 5).

*/

#include <iostream>

using namespace std;

int main() {
  int matricula, notaM, notam , total, rep, repF, i; 
  float nota1, nota2, nota3, soma, soman, frequencia, n, media;

  n = 0;
  notaM = -1;
  notam = 100;
  total = 0;
  rep = 0;
  i = 0;

  for(i = 0; i < 100; i++) {

    cout << "Insira a matricula: ";
    cin >> matricula;

    cout << "Insira a 1° nota: ";
    cin >> nota1;

    cout << "Insira a 2° nota: ";
    cin >> nota2;

    cout << "Insira a 3° nota: ";
    cin >> nota3;

    cout << "Insira a frequência: ";
    cin >> frequencia;

    soman = (nota1 + nota2 + nota3);

    soma = soman / 3;

    n += soma;
    
    cout << "Matricula do aluno: " << matricula << endl;
    cout << "Nota Final do aluno: " << soma << endl;
    cout << "Frequência do aluno: " << frequencia << endl;

    if (frequencia < 40 || soma < 60) {

      cout << "Aluno reprovado por nota e ausência!!!" << endl;
      rep++;

    } else if (frequencia > 40 && soma < 60) {

        cout << "Aluno reprovado por nota!!!" << endl;
        rep++;
      
    } else if (soma > 60 && frequencia < 40) {

        cout << "Aluno reprovado por ausência!!!" << endl;
        rep++;
        total++;

    } else

        cout << "Aluno aprovado, parabéns!!! " << endl;
    
    if (soma > notaM) {

      notaM = soma;

    } if (soma < notam) {

      notam = soma;

    }
  }

  media = n / i;
  repF = frequencia / i;

  cout << "Média: " << media << endl;
  cout << "Menor nota do aluno: " << notam << endl;
  cout << "Maior nota do aluno: " << notaM << endl;
  cout << "Total de reprovados por frequência: " << repF << endl;
  cout << "Total de reprovados: " << total;

  return 0;
  
}