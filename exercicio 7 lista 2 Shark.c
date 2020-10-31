//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//7. Considere o programa para determinar se uma sequência de n números digitados pelo usuário está ordenado ou não. Faça o programa usando uma variável contadora.


int main()
{
    setlocale(LC_ALL, " ");

    int sabr, ultimoN = 0, contadora = 0;

    printf("Digite um numero para executar a sequencia:\n");

    scanf("%i", &sabr);

    for(int i = 1; i <= sabr; i++){

        int num;

        printf("Digite um numero para executar a sequencia \n");
        scanf("%i", &num);

        if( num > ultimoN){

            contadora++;

        }
        ultimoN = num;

    }

    if (sabr == contadora){
        printf("Esta em ordem crescente \n");

    }else{
        printf("Não esta em ordem crescente");

}}













    //Sharline Aparecida Vieira
