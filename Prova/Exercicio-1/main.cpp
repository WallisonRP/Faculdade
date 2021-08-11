//Nome: Wallison Franklin Pereira
//R.A: 2840482111012


#include <iostream>

using namespace std;

int main() {
  //Declaração de variáveis
  float peso, comprimento, largura, altura, volume, reprovado = 0;
  char material, saida;


//Loop para o menu de escolha dos materiais
  do {
    reprovado = 0;
    cout << "Selecione o tipo do material" << endl;
    cout << "[M]Metal" << endl;
    cout << "[P]Plástico" << endl;
    cout << "[V]Vidro" << endl;
    cin >> material;

  //Condicional para garantir que o programa rode apenas com as iniciais dos materiais
  if (material != 'm' && material != 'M' && material != 'p' && material != 'P' && material != 'v' && material != 'V'){
     cout << "Entrada inválida!!!\n" << endl;
     goto inv; //instrução para o usuário inserir outro material caso o mesmo seja inválido
  }

//Entrada do peso do material
  cout << "Digite o peso do material em gramas" << endl;
  cin >> peso;

//Entrada das medidas do material
  cout << "Digite o comprimento, largura e altura (Nessa ordem)" << endl;
  cin >> comprimento >> largura >> altura;

//calculo do volume do material
  volume = comprimento * largura * altura;


  //Condições do Item A
  if (material == 'p' && peso > 30000 | material == 'P' && peso > 30000) {
    if (volume > 50 ){
      reprovado = 1;
      cout << "O material não passou no controle de qualidade!!" << endl;
      cout << "O volume deve ser menor que 50 para plásticos com peso superior a 30 kilos!\n" << endl;
    } else if (altura > 1) {
            reprovado = 1;
            cout << "O material não passou no controle de qualidade!!" << endl;
            cout << "A profundidade deve ser menor que 1 para materiais de plástico!\n" << endl;
    }
  }

  //Condições do Item B
  if (material == 'v' || material == 'V') {
    if (peso < 1000 && largura < 25)
       reprovado = 1;
       cout << "O material não passou no controle de qualidade!!" << endl;
       cout << "Materiais de vidro devem ter no mínimo 25 centímetros de largura\ne devem ter no mínimo 1kg!\n" << endl;
  }

  //Condições do Item C
  if (material == 'm' || material == 'M') {
    if (volume < 80) {
      if (peso > 100000 && comprimento < 10){
        reprovado = 1;
        cout << "O material não passou no controle de qualidade!!" << endl;
        cout << "Materiais de metal com volume inferior a 80, devem possuir mais \nque 100kg e ter no mínimo 10 centímetros de comprimento!\n" << endl;
      }
    }
  }

  //Condições do Item D
  if (material == 'v' || material == 'V'){
    if (volume > 35) {
      if (largura < 25 && altura > 10) {
        reprovado = 1;
        cout << "O material não passou no controle de qualidade!!" << endl;
        cout << "Materiais de vidro com volume superior a 35, devem possuir mais \nque 25cm de largura e ter menos de 10 centímetros de profundidade!\n" << endl;
      }
    }
  }

//Condição caso o material seja reprovado
  if (reprovado == 0) {
    cout << "O material foi aprovado no controle de qualidade e \ndeve ser enviado para o processo de fabricação!\n" << endl;
  }

  inv: //Label de saida caso o material correto não seja escolhido.


  //Condição de saida
  cout << "Deseja consultar outro material?" << endl;
  cout << "         [S]Sim  [N]Não         " << endl;
  cin >> saida;
  } while (saida == 's' || saida == 'S');

  return 0;
}