//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*15. Na transforma��o decimal para bin�rio, modifique o programa para que este obtenha o valor bin�rio
em uma vari�vel inteira, ao inv�s de imprimir os d�gitos um por linha na tela. Dica: Suponha n = 7
(111 em bin�rio), e voc� j� computou x = 11, para "inserir"o �ltimo d�gito 1 em x voc� deve fazer
x = x + 100. Ou seja, voc� precisa de uma vari�vel acumuladora que armazena as pot�ncias de 10:
1, 10, 100, 1000 etc.
*/


int main()
{               setlocale(LC_ALL,"");


          int sabr;
            char b[10];

            printf("Digite um numero: ");
            scanf("%d",&sabr);

            (sabr,b,2);

            printf("\nO numero %d em binario e: %s",sabr,b);




    return 0;
}




















//Sharline Aparecida Vieira
