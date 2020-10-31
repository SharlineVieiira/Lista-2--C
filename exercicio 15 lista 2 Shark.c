//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*15. Na transformação decimal para binário, modifique o programa para que este obtenha o valor binário
em uma variável inteira, ao invés de imprimir os dígitos um por linha na tela. Dica: Suponha n = 7
(111 em binário), e você já computou x = 11, para "inserir"o último dígito 1 em x você deve fazer
x = x + 100. Ou seja, você precisa de uma variável acumuladora que armazena as potências de 10:
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
