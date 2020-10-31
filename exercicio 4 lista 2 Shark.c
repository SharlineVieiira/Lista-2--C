//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//4. Faça um programa que lê um número n e imprima os valores entre 2 e n, que são divisores de n.



int main()
{
             setlocale(LC_ALL, "");
       int sabr,i;

        printf("digite um numero\n");
            scanf("%d", &sabr);

        for (i = 2; i<=sabr; i++){
            if (sabr%i==0){
               printf("os divisores sao %d \n", i);
           }
       }
       return 0;
}










//Sharline Aparecida Vieira
