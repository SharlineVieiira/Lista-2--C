//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
16. Faça um programa que leia um inteiro n (no máximo 50) e imprima uma saída da forma:

1
  2
    3
      .
        .
         .
          n

*/

int main()
{
                                setlocale(LC_ALL,"");

    int linha,coluna;

int sabr;

printf("Digite um numero de sua escolha para que seja \n");
scanf("%d",&sabr);


int cont=0;
    for (linha=0;linha<=sabr;linha++){
        for(coluna=0;coluna<=sabr;coluna++){
          if(linha==coluna && sabr<=50){
          cont+=1;
          printf(" %d",cont-1);
           }else{
            printf("  ");}
         }   printf("\n");


    }
    return 0;
}










//Sharline Aparecida Vieira
