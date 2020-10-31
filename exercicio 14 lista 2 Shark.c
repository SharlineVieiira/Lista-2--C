//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//14. Implemente um programa que compute todas as soluções de equações do tipo

//x1 + x2 + x3 + x4 = C

// Melhore o seu programa com as seguinte idéias.
//• Fixado x1, os valores possíveis para x2 são 0, . . . , C − x1. Fixado x1 e x2, os valores possíveis para x3 são 0, . . . , C − x1 − x2. Fixados x1, x2, e x3, então x4 é unicamente determinado.




int main()
{
   setlocale (LC_ALL, " ");

   int x1,x2,x3,x4, c;

        printf ("\nDigite um valor para mostrar todas as formas de equações possiveis:");
            scanf ("%d", &c);


    for (x1=0; x1<=c; x1++)
    for (x2=0; x2<=c; x2++)
    for (x3=0; x3<=c; x3++)
    for (x4=0; x4<=c; x4++)
                                if (x1+x2+x3+x4 ==c)
          printf("\n%d+%d+%d+%d+ =%d\n", x1,x2,x3,x4,c);

    return 0;
}















//Sharline Aparecida Vieira
