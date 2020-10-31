//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//13. Aponte os erros de implementação existentes no código em C, a seguir, desenvolvido com o intuito de calcular e imprimir o fator de um número inteiro não-negativo.



int main() {

    setlocale(LC_ALL,"");

  int sabr,
      cont,
      fator;

  printf("\n                    Calculo do fator de um numero\n");

  printf("\nDigite um inteiro nao-negativo: ");
  scanf("%d", &sabr);

  /* inicializacoes */
  fator = 1;
  cont = 2;
if (sabr>-1)
    while (cont <= sabr) {
    fator = fator * cont;
    cont = cont + 1;
    }
     printf("O valor de %d!: %d\n", sabr, fator);



  return 0;
}






















//Sharline Aparecida Vieira
