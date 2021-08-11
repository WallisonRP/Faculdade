/* 12 - Problemas simples do cotidiano podem representar desafios para o mundo computacional. 
Faça um programa que, dados três números inteiros representando dia, mês e ano de uma data, imprima qual o dia seguinte. */

#include <iostream>

using namespace std;

int main() {
  int dia, mes, ano, contador1, contador2, contador3, dia1, mes1;

 cout << "Digite o Dia: " << endl;
 cin >> dia;

 cout << "Digite o Mês:" << endl;
 cin >> mes;

 cout << "Digite o Ano: " << endl;
 cin >> ano;

 contador1 = dia + 1;
 contador2 = mes + 1;
 contador3 = ano + 1;
 dia1 = 01;
 mes1 = 01;

 if (dia == 30 && mes != 12) {
    cout << "A data de amanhã será " << endl;
    cout << dia1 << "/" << contador2 << "/" <<  ano;
    return 0;
  }

  else if (dia == 30 && mes == 12) {
    cout << "A data de amanhã será " << endl;
    cout << dia1 << "/" << mes1 << "/" << contador3;
    return 0;
  }
  else if (mes > 12) {
    cout << "Insira uma data válida!!!" << endl;
    return 0;
  }
  else if (dia > 30) {
    cout << "Insira uma data válida!!!" << endl;
    return 0;
  }
  cout << "A data de amanhã será: " << endl;
  cout << contador1 << "/" << mes << "/" << ano << endl;

  return 0;
}