/*

20) Fazer um algoritmo para calcular o número de dias decorridos entre duas datas (considerar também a ocorrência de anos bissextos), sabendo-se que:

a) cada par de datas é lido numa linha, a última linha contém o número do dia negativo

b) a primeira data na linha é sempre a mais antiga.
O ano está digitado com quatro dígitos.

*/

#include <iostream>

using namespace std;

int main(void) {
  
  int Dig1, Dig2, mul1, mul2, A1, A2, m, d, a, c, dA, dB, mA, mB;

  cout << "Digite uma data: ";
  cin >> Dig1 >> mul1 >> A1;

  while (Dig1 != 0) {
      cout << "Digite outra data: ";
      cin >> Dig2 >> mul2 >> A2;
      
      if (A1 == A2) {
          
          for (m = mul1, d = 0; m < mul2; m++) {
              if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                  d += 31;
              } else {
                  if (m == 2) {
                      
                      if (A1 % 4 == 0 || (A1 % 400 == 0 && A1 % 100 != 0))
                          d += 29;
                      else
                          d += 28;
                  }
                  else
                      d += 30;
              }
          }
          
          d -= Dig1;
          
          d += Dig2;
      }
      
      else {
          
          for (c = d = 0; c < 2; c++) {
              
              if (!c) {
                  dA = Dig1;
                  mA = mul1;
                  a = A1;
                  dB = 31;
                  mB = 12;
              }
              
              else {
                  dA = mA = 1;
                  a = A2;
                  dB = Dig2;
                  mB = mul2;
              }
              for (m = mA; m < mB; m++) {
                  if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                      d += 31;
                  } else {
                      if (m == 2) {
                          if (a % 400 == 0 || (a % 400 == 0 && a % 100 != 0))
                              d += 29;
                          else
                              d += 28;
                      }
                      else
                          d += 30;
                  }
              }
              d -= dA;
              d += dB;
          }
          
          if (A2 - A1 > 1) {
              
              for (a = A1 + 1; a < A2; a++) {
                  if (a % 400 == 0 || (a % 400 == 0 && a % 100 != 0))
                      d += 366;
                  else
                      d += 365;
              }
          }
      }

      cout << "Entre " << Dig1 << "/" << mul1 << "/" << A1 << " e " << Dig2 << "/" << mul2 << "/" << A2 << " existem " << d << " dia(s)." << endl;
      cout << "Digite uma data: ";
      cin >> Dig1 >> mul1 >> A1;

  }

  return 0;

}