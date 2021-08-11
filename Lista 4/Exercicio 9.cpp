/*

9 - Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo período. 
Fazer um algoritmo que:
• leia inicialmente o número de crianças nascidas no período;

• leia, em seguida um número indeterminado de linhas, contendo, cada uma, o sexo de uma criança morta (M, F) e o número de meses de vida da criança. A última linha, que não entrará nos cálculos, contém no lugar do sexo a letra V;

• determine e imprima:
a) a porcentagem de crianças mortas no período;
b) a porcentagem de crianças do sexo masculino mortas no período;
c) a porcentagem de crianças que viveram 24 meses ou menos no período.

*/

#include <iostream>

using namespace std;

int main() {
  float i = 0, masc = 0, fem = 0, idade = 0, cont_idade  = 0, contador_estado = 0, masc_dead = 0;
  char saida, sexo, estado;

  do {
    i++;

    cout << "Qual o sexo criança? [F] Feminino [M] Masculino" << endl;
    cin >> sexo;

    if (sexo == 'm' || sexo == 'M') 
      masc += 1;
    else                            
      fem += 1;

    cout << "Qual o estado da criança [V] Viva ou [M] Morta"<< endl;
    cin >> estado;

    if (estado == 'm' || estado == 'M'){ 
      contador_estado += 1; 
    }
    if (estado == 'm' || estado == 'M'){
      cout << "Digite a idade, em meses, de vida da criança: " << endl;
      cin >> idade;
    }
    if (estado == 'm' | estado == 'M' && idade <= 24) {
      cont_idade += 1;     
    }              
    if (sexo == 'm'| sexo == 'M' && estado == 'm' | estado == 'M'){
      masc_dead += 1;
    }

    cout << "Deseja sair do programa? " << endl;  
    cin >> saida;

  } while (saida == 'n' || saida == 'N');


  cout << "Procentagem de crianças mortas no período: " << (contador_estado / i) << endl;
  cout << "Porcentagem de crianças mortas do sexo masculino: " << (masc_dead / masc)<< endl;
  cout << "Porcentagem de crianças que viveram 24 meses ou menos: "  << (cont_idade / i) << endl;

  return 0;

}