//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//17. Faça um programa que leia um número n e imprima n linhas na tela com o seguinte formato (exemplo se n = 6):
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/


int main(){
 int i, n, x;
 printf("Digite o valor de n\n ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++){
   for (x = 1; x <= i; x++){
     printf("%d", x);
     }
     printf("\n");
 }
 return 0;
}
















//Sharline Aparecida Vieira
