//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



//1. Fa�a um programa que imprima um menu de 4 pratos na tela e uma quinta op��o para sair do programa. O programa deve imprimir o prato solicitado. O programa deve terminar quando for escolhido a quinta op��o.



int main()
{
     setlocale(LC_ALL, "");
	int prato = 0;

do{

        printf("******** CARD�PIO SHARK ********\n");        // Cardapio para sele��o.
        printf("1- TORRE DE CHOPP 2L\n");
        printf("2- PORC�O DE BATATA MEDIA \n");
        printf("3- X-FRANBACON\n");
        printf("4- PORCAO DE FRIOS + lONG BUDWEISER\n");
        printf("5- SAIR/FINALIZAR PEDIDO\n");
        printf("*********************************\n");
        printf(" Escolha uma das op��es acima \n");


                scanf("%i", &prato);

                switch(prato){
        case 1:
            printf ("TORRE DE CHOPP 2L \n\n\n");
            break;
        case 2:
            printf ("PORC�O DE BATATA MEDIA \n\n\n");
            break;
        case 3:
            printf ("X-FRANBACON \n\n\n");
            break;
        case 4:
            printf ("PORCAO DE FRIOS + lONG NECK BUDWEISER \n\n\n");
            break;
        case 5:
            printf ("SEU PEDIDO FOI FINALIZADO... VOLTE SEMPRE!! \n\n\n");
            break;

            default:
                printf("OP��O INVALIDA \n\n\n"); //Se for digitado numero fora do intervalo 1 e 5.
            break;
    }
                                //Continua repetindo at� o usuario finalizar o pedido.
}   while(prato < 5 && prato >= 1);


}















//Sharline Aparecida Vieira
