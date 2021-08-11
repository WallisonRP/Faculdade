/*19 - Uma determinada fábrica de rádios possui duas linhas de montagem distintas: standard e luxo. A linha de montagem standard comporta um máximo de 24 operários; cada rádio standard dá um lucro de X reais e gasta um homem-dia para sua confecção. A linha de montagem luxo comporta no máximo 32 operários; e cada rádio luxo dá um lucro de Y reais e gasta 2 homens-dia para sua confecção. 
A fábrica possui 40 operários. O mercado é capaz de absorver toda a produção e o fabricante deseja saber qual esquema de produção a adotar de modo a maximizar seu lucro diário. Fazer um algoritmo que leia os valores de X e Y e escreva, para esse esquema de lucro máximo, o número de operários na linha standard e na linha luxo, o número de rádios standard e luxo produzidos e o lucro.*/

/*Maximizar:
LUCRO = 30 x ST + 40 x LX
Sujeito a:
ST ≤ 24
LX ≤ 16
1 x ST + 2 x LX ≤ 40*/


#include <iostream>



using namespace std;

int main() {

  float lucroST, lucroLX, lucro, lucroTotal = 0;
  int op_st, op_lx, totalOp = 40, opIdealLX, opIdealST;

  cout << "Digite o lucro com os rádios standard e luxo, respectivamente." << endl;
  cin >> lucroST >> lucroLX;

/*
    //formula do lucro
    lucroTotal = lucroST * st + lucroLX * lx;  
    // limite max de op por setor
    op_st <= 24;
    op_lx <= 32;
    //total de op
    op_st + op_lx = 40;
    //limite de op por setor
    op_st_min = 40 - op_lx (maximo) = 40 - 32 = 8
    op_lx_min = 40 - op_st (maximo) = 40 - 24 = 16

    // produção
    st = op_st
    lx = op_lx / 2

    //formula lucro em função de op
    lucro = op_st * lucroST + op_lx/2 * lucroLX
    op_lx = 40 - op_st


*/



      // operários na linha ST => minimo 8 e máximo 24
    for (op_st = 8; op_st <=24;){
      op_lx = totalOp - op_st;
      lucro = op_st * lucroST + (op_lx/2) * lucroLX;
      if (lucro > lucroTotal){
        lucroTotal = lucro;
        opIdealST = op_st;
        opIdealLX = op_lx;
      }

      op_st++;

    }
      //operários na linha LX => minimo 16 e máximo
    for (op_lx = 16; op_lx <= 32;){
      op_st = totalOp - op_lx;
      lucro = op_st * lucroST + (op_lx/2) * lucroLX;
      
      if(lucro > lucroTotal){
        lucroTotal = lucro;
        opIdealST = op_st;
        opIdealLX = op_lx;
      }

      op_lx++;

    }

    cout << "Número de operários na linha standard: " << opIdealST << endl;
    cout << "Número de operários na linha luxo: " << opIdealLX << endl;
    cout << "Número de rádios standard produzidos: " << opIdealST << endl;
    cout << "Número de rádios luxo produzidos: " << opIdealLX/2 << endl;
    cout << "Lucro máximo: " << lucroTotal << endl;

  return 0; 

}