//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//10. O que ser� impresso pelo programa abaixo? Assuma que o valor de D na declara��o de x � o valor do �ltimo d�gito do seu RA.

int main() {

        int x = 5+8, y = 0;
            do {
                    y = (x % 2) + 10 * y;
                            x = x / 2;
            printf("x = %d, y = %d\n", x, y );

        } while (x != 0);
        while (y != 0) {
        x = y % 100;
        y = y / 10;
        printf("x = %d, y = %d\n", x, y );
        }

return 0;
 }
