//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//7. Considere o programa para determinar se uma sequ�ncia de n n�meros digitados pelo usu�rio est� ordenado ou n�o. Fa�a o programa usando uma vari�vel contadora.


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
        printf("N�o esta em ordem crescente");

}}













    //Sharline Aparecida Vieira
