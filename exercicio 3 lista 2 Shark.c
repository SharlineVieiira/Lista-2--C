//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//3. Fa�a um programa que l� um n�mero n e que compute e imprima o valor

int main()
{

    int s, comput = 0;

    printf("Digite um numero para imprimi-lo computado: \n");
            scanf(" %i", &s);

    for(int i= 1; i <= s; i++){// Repete somando 1

        comput = i + comput;      //  Resultado de cada repeti��o

    }
            printf("\n%i \n", comput);


    return 0;

}















//Sharline Aparecida Vieira
