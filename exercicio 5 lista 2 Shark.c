//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//5. Faça um programa que lê um número n e imprima os valores para j de 1 até n, um valor por linha.

int main()
{
    int sabr;

        setlocale(LC_ALL," ");


            printf("Digite um numero correspondente a j: \n");
            scanf("%i", &sabr);

            for (int j = 1; j <= sabr; j++){

                int valor_linha = 0;

                for(int i = j; i <= sabr; i++){
                    valor_linha = i + valor_linha;
                    printf("%i ", i);
                }

                printf("= %i \n", valor_linha);
            }

    return 0;
}




























//Sharline Aparecida Vieira
