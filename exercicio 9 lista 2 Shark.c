//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//9. Escreva um programa que l� um n�mero n, e ent�o imprime o menor n�mero primo que � maior ou igual n, e imprime o maior primo que � menor ou igual a n.
int main() {


    setlocale(LC_ALL, "");
    int sabr, e_primo;

    printf("Digite um n�mero: ");
    scanf("%d", &sabr);


    //N -> 20
    //primos at� 100: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97

    // Encontra o proximo primo a direita
    for (int i=sabr; ; i++) {

        // verifica se i � primo
        e_primo = 1;
        for (int j=2; j<i; j++) {
            if (i % j == 0)
                e_primo = 0; // n�o � primo, pois foi poss�vel fazer a divis�o
        }

        // imprime que o numero avaliado "i" � primo e para a busca dando break no for de i
        if (e_primo == 1) {
            printf("Proximo primo a direita �: %d\n", i);
            break;
        }
    }



    // Encontra o proximo primo a esquerda
    for (int i=sabr;i>0; i--) {

        // verifica se i � primo
        e_primo = 1;
        for (int j=2; j<i; j++) {
            if (i % j == 0)
                e_primo = 0;
        }

        // imprime que o numero avaliado "i" � primo e para a busca dando break no for de i
        if (e_primo == 1) {
            printf("Proximo primo a esquerda �: %d\n", i);
            break;
        }
    }

    return 0;
}
