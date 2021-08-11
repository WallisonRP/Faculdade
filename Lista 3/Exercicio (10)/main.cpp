/*O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta. A fórmula é 

IMC = peso
altura2

 Elabore um programa que leia o peso e a altura de um adulto e mostre sua 
condição de acordo com a tabela abaixo.

Abaixo de 18,5  - Abaixo do peso
Entre 18,5 e 25 - Peso normal
Entre 25 e 30   - Acima do peso
Acima de 30     - Obeso
*/


#include <iostream>

using namespace std;

int main() {
  float peso, altura, imc;
  
  cout << "Digite o peso em Kg." << endl;
  cin >> peso;

  cout << "Digite a altura em metros." << endl;
  cin >> altura;

  imc = (peso / (altura * altura));

  if (imc < 18.5) {
    cout << "Abaixo do peso" << endl;
  } 
  
  if (imc >= 18.5 && imc < 25) {
    cout << "Peso normal" << endl;
  } 

  if (imc >= 25 && imc < 30){
    cout << "Acima do peso" << endl;
  }

  if (imc > 30) {
    cout << "Obeso" << endl;
  }
  return 0;
}