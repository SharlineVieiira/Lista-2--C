//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//18. Faça um programa que leia um número n e imprima n linhas na tela com o seguinte formato (exemplo se n = 6):
/*
+ * * * * *
* + * * * *
* * + * * *
* * * + * *
* * * * + *
* * * * * +
*/


int main()
          {
         int linha,coluna,n;
            printf("Digite um numero\n");
                scanf("%d",&n);
                for (linha=0;linha<=n;linha++){
                    printf(" \n");
                    for(coluna=0;coluna<=n;coluna++)
                         {
                         if(linha==coluna ){
                            printf("+ ");
         }
         else if(coluna>linha){
        printf("* ");}
        else{
         printf(" ");}
         if(linha>coluna){
         printf("* ");
         } else {
         printf(" ");}



            } printf(" \n ");



 }
 return 0;
 }







 //Sharline Aparecida Vieira
