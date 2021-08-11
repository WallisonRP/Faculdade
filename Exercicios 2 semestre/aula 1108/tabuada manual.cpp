/* Tabuada manual, sem uso de de laços de repetição */

#include <iostream>

using namespace std;

int main()
{
    int escolha = 0;
    printf("Deseja visualizar uma tabuada pronta ou escolher quais tabuadas visualizar.\n");
    printf("[1]Tabuada pronta; [2]Inserir valores.\n");
    scanf("%d", &escolha);

    if(escolha == 1) {
        printf("-------------- Tabuada ---------------\n\n");
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",1,0,1*0,2,0,2*0);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",1,1,1*1,2,1,2*1);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",1,2,1*2,2,2,2*2);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",1,3,1*3,2,3,2*3);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",1,4,1*4,2,4,2*4);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",1,5,1*5,2,5,2*5);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",1,6,1*6,2,6,2*6);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",1,7,1*7,2,7,2*7);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",1,8,1*8,2,8,2*8);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",1,9,1*9,2,9,2*9);
        printf("%d X %1d = %1d\t|\t %d X %1d = %1d\n",1,10,1*10,2,10,2*10);
        printf("                |\n-------------------------------------\n");
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",3,0,3*0,4,0,4*0);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",3,1,3*1,4,1,4*1);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",3,2,3*2,4,2,4*2);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",3,3,3*3,4,3,4*3);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",3,4,3*4,4,4,4*4);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",3,5,3*5,4,5,4*5);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",3,6,3*6,4,6,4*6);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",3,7,3*7,4,7,4*7);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",3,8,3*8,4,8,4*8);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",3,9,3*9,4,9,4*9);
        printf("%d X %1d = %1d\t|\t %d X %1d = %1d\n",3,10,3*10,4,10,4*10);
    } else if(escolha == 2) {
        int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0;
        printf("Insira 4 valores separados por virgula(,):\n");
        scanf("%d,%d,%d,%d",&valor1,&valor2,&valor3,&valor4);
        printf("-------------- Tabuada ---------------\n\n");
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor1,0,valor1*0,valor2,0,valor2*0);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor1,1,valor1*1,valor2,1,valor2*1);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor1,2,valor1*2,valor2,2,valor2*2);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor1,3,valor1*3,valor2,3,valor2*3);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor1,4,valor1*4,valor2,4,valor2*4);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor1,5,valor1*5,valor2,5,valor2*5);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor1,6,valor1*6,valor2,6,valor2*6);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor1,7,valor1*7,valor2,7,valor2*7);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor1,8,valor1*8,valor2,8,valor2*8);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor1,9,valor1*9,valor2,9,valor2*9);
        printf("%d X %1d = %1d\t|\t %d X %1d = %1d\n",valor1,10,valor1*10,valor2,10,valor2*10);
        printf("                |\n-------------------------------------\n");
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor3,0,valor3*0,valor4,0,valor4*0);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor3,1,valor3*1,valor4,1,valor4*1);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor3,2,valor3*2,valor4,2,valor4*2);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor3,3,valor3*3,valor4,3,valor4*3);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor3,4,valor3*4,valor4,4,valor4*4);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor3,5,valor3*5,valor4,5,valor4*5);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor3,6,valor3*6,valor4,6,valor4*6);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor3,7,valor3*7,valor4,7,valor4*7);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor3,8,valor3*8,valor4,8,valor4*8);
        printf("%d X %2d = %2d\t|\t %d X %2d = %2d\n",valor3,9,valor3*9,valor4,9,valor4*9);
        printf("%d X %1d = %1d\t|\t %d X %1d = %1d\n",valor3,10,valor3*10,valor4,10,valor4*10);
    }

    return 0;
}