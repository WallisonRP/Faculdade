/*

14) Tem-se uma estrada ligando várias cidades. Cada cidade tem seu marco quilométrico. Fazer um algoritmo que:

• leia vários pares de dados, contendo cada par os valores dos marcos quilométricos, em ordem crescente, de duas cidades. O último par contém estes dois valores iguais;

• calcule os tempos decorridos para percorrer a distância entre estas duas cidades, com as seguintes velocidades: 20, 30, 40, 50, 60, 70, 80 km/hora, sabendo-se que t = e / v ,onde
t=tempo; e=espaço; v=velocidade;

• escreva os marcos quilométricos, a velocidade e o tempo decorrido entre as duas cidades, apenas quando este tempo for superior a 2 horas.

*/

#include <iostream>

using namespace std;

int main() {
  float marco1, marco2, tempo, space, u;
  int velo;

  while (marco1 != marco2) {

    cout << "Insira o primeiro marco quilométrico: ";
    cin >> marco1;

    cout << "Insira o segundo marco quilométrico: ";
    cin >> marco2;

    cout << "Insira a velocidade: " << endl;
    cout << "20, 30, 40, 50, 60, 70, 80" << endl;
    cin >> velo;

    space = marco2 - marco1;
    u = 0;

    if (velo == 20) {

      tempo = space / 20;

      if (tempo >= 2) {
        cout << "Tempo maior que duas horas" << endl;
        cout << "Espaço percorrido: do km " << marco1 << " ao km " << marco2 << endl;
        cout << "Tempo entre os marcos: " << tempo << " h. " << endl;
        cout << "Velocidade: " << velo << "km/h" << endl;
        u = 1;
      } else if (u == 0)
          cout << "Não atingiu o minimo de tempo" << endl;

    }
    

    if (velo == 30) {

      tempo = space / 30;

      if (tempo >= 2) {
        cout << "Tempo maior que duas horas" << endl;
        cout << "Espaço percorrido: do km " << marco1 << " ao km " << marco2 << endl;
        cout << "Tempo entre os marcos: " << tempo << " h. " << endl;
        cout << "Velocidade: " << velo << "km/h" << endl;
        u = 1;
      } else if (u == 0)
          cout << "Não atingiu o minimo de tempo" << endl;
            
    }

    if (velo == 40) {

      tempo = space / 40;

      if (tempo >= 2) {
        cout << "Tempo maior que duas horas" << endl;
        cout << "Espaço percorrido: do km " << marco1 << " ao km " << marco2 << endl;
        cout << "Tempo entre os marcos: " << tempo << " h. " << endl;
        cout << "Velocidade: " << velo << "km/h" << endl;
        u = 1;
      } else if (u == 0)
          cout << "Não atingiu o minimo de tempo" << endl;
            
    }

    if (velo == 50) {

      tempo = space / 50;

      if (tempo >= 2) {
        cout << "Tempo maior que duas horas" << endl;
        cout << "Espaço percorrido: do km " << marco1 << " ao km " << marco2 << endl;
        cout << "Tempo entre os marcos: " << tempo << " h. " << endl;
        cout << "Velocidade: " << velo << "km/h" << endl;
        u = 1;
      } else if (u == 0)
          cout << "Não atingiu o minimo de tempo" << endl;
            
    }

    if (velo == 60) {

      tempo = space / 60;

      if (tempo >= 2) {
        cout << "Tempo maior que duas horas" << endl;
        cout << "Espaço percorrido: do km " << marco1 << " ao km " << marco2 << endl;
        cout << "Tempo entre os marcos: " << tempo << " h. " << endl;
        cout << "Velocidade: " << velo << "km/h" << endl;
        u = 1;
      } else if (u == 0)
          cout << "Não atingiu o minimo de tempo" << endl;
          
    }

    if (velo == 70) {

      tempo = space / 70;

      if (tempo >= 2) {
        cout << "Tempo maior que duas horas" << endl;
        cout << "Espaço percorrido: do km " << marco1 << " ao km " << marco2 << endl;
        cout << "Tempo entre os marcos: " << tempo << " h. " << endl;
        cout << "Velocidade: " << velo << "km/h" << endl;
        u = 1;
      } else if (u == 0)
          cout << "Não atingiu o minimo de tempo" << endl;
          
    }

    if (velo == 80) {

      tempo = space / 80;

      if (tempo >= 2) {
        cout << "Tempo maior que duas horas" << endl;
        cout << "Espaço percorrido: do km " << marco1 << " ao km " << marco2 << endl;
        cout << "Tempo entre os marcos: " << tempo << " h. " << endl;
        cout << "Velocidade: " << velo << "km/h" << endl;
        u = 1;
      } else if (u == 0) 
          cout << "Não atingiu o minimo de tempo" << endl;
          
    }
    
  }

  return 0;

}