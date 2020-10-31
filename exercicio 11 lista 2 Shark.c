//Sharline Aparecida Vieira
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* Lista 2 - Exerc�cio 11
11-Escreva um programa para ler n de n�meros do tipo float e imprimir quantos deles est�o nos seguintes intervalos:
            [0 . . . 25],
            [26 . . . 50],
            [51 . . . 75] e
            [76 . . . 100].
*/


int main() {
    setlocale(LC_ALL, "");

    // vari�veis contadoras
    int contaInter1 = 0; // [0 . . . 25]
    int contaInter2 = 0; // [26 . . . 50]
    int contaInter3 = 0; // [51 . . . 75]
    int contaInter4 = 0; // [76 . . . 100]

    // n�mero que o usu�rio ir� digitar
    float numero;

    // quantos n�meros ser�o digitados pelo usu�rio
    int quantidade;

    printf("Quando n�meros deseja digitar? ");
    scanf("%d", &quantidade);

    // ler todos os n�emros e classificar de acordo com o intervalo
    for (int i=0;i<quantidade;i++) {

        printf("Digite o n�mero [%d]: ", i+1);
        scanf("%f", &numero);

        // [0 . . . 25]
        if(numero >= 0 && numero <= 25)
            contaInter1++;

        // [26 . . . 50]
        if(numero >= 26 && numero <= 50)
            contaInter2++;

        // [51 . . . 75]
        if(numero >= 51 && numero <= 75)
            contaInter3++;

        //[76 . . . 100]
        if(numero >= 76 && numero <= 100)
            contaInter4++;
    }


    printf("\n\nRESULTADO:\n");
    printf("Intervalo [0 . . . 25]: %d\n", contaInter1);
    printf("Intervalo [26 . . . 50]: %d\n", contaInter2);
    printf("Intervalo [51 . . . 75]: %d\n", contaInter3);
    printf("Intervalo [76 . . . 100]: %d\n", contaInter4);


    return 0;
}





















//Sharline Aparecida Vieira
