/*16 - Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para preenchimento de vagas no seu quadro de funcionários, utilizando processamento eletrônico. Supondo que você seja o programador encarregado desse levantamento, fazer um algoritmo que:•leia um conjunto de dados para cada candidato contendo: 
a)número de inscrição do candidato;
b)idade;
c)sexo (masculino, feminino)
;d)experiência no serviço (sim ou não).O último conjunto contém o número de inscrição do candidato igual a zero.
•calcule:
•o número de candidatos do sexo feminino;•o número de candidatos do sexo masculino;
•idade média dos homens com mais de 45 anos entre o total de homens;
•número de mulheres que têm idade inferior a 35 anos e com experiência no serviço;
•a menor idade entre mulheres que já tem experiência no serviço;
•escreva:
a)o número de inscrição das mulheres pertencentes ao grupo descrito no item e; 
b)o que foi calculado em cada item acima especificado.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  float insc, idade, fem, masc, media_masc, media_fem , menor, idade_masc;
  char sexo, exp, saida;
  string msg;

  insc = idade = fem = masc = media_masc = media_fem = menor = idade_masc = 0;

  do {
  cout << "Digite o número de inscrição: " << endl ;
  cin >> insc;

  cout << "Digite a idade do candidato(a): " << endl;
  cin >> idade;

  cout << "Qual o sexo do candidato(a) [F]Feminino [M]Masculino: " << endl;
  cin >> sexo;

  cout << "O usuário possui experiência? [S]Sim [N]Não " << endl;
  cin >> exp;

  if (sexo == 'f' || sexo == 'F') {
      fem += 1;
  } else if (sexo == 'm' || sexo == 'M') {
             masc += 1;
  }

  if (sexo == 'm' | sexo == 'M' && idade >= 45) {
      media_masc += 1;
      idade_masc += idade;

  }

  if (sexo == 'f' | sexo == 'F' && idade <= 35){
      if (exp == 's' || exp == 'S'){
          media_fem += 1;
            if (menor < idade){
                menor = idade;
            }
      }
  }
    cout << "Deseja finalizar o programa? [S]Sim [N]Não: " << endl;
    cin >> saida;
  } while (saida == 'n' || saida == 'N');


  media_masc = (idade_masc / masc);


  cout << "Nº de candidatos do sexo feminino: " << fem << endl;
  cout << "Nº de candidatos do sexo masculino: " << masc << endl;
  cout << "Idade média de homens com mais de 45 anos: " << media_masc << endl;
  cout << "Nº de mulheres com menos de 35 e com experiência: " << media_fem << endl;
  cout << "Menor idade entre mulheres que possuem experiência: " <<  menor << endl;

  return 0;
  
}