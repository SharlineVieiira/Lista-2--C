//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//2. Faça um programa que lê dois números inteiros positivos a e b. Utilizando laços, o seu programa deve calcular e imprimir o valor a b.

int main()
{
   int result = 0;

    result = calculo_potencia(16,2);

    printf("%i", result);

    return 0;
}

int calculo_potencia (int base,int expoente){

    int multiplicacao = 1;

    for(int i = 1; i <= expoente; i++){

        multiplicacao = base * multiplicacao;
    }
    return multiplicacao;

}















//Sharline Aparecida Vieira
