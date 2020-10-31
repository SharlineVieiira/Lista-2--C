//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//8. Faça um programa em C que calcule o máximo divisor comum de dois números m, n. Você deve utilizar a seguinte regra do cálculo do mdc com m ≥ n
    //mdc(m, n) = m se n = 0
    //mdc(m, n) = mdc(n, m%n) se n > 0


int main(){



    setlocale(LC_ALL,"");

    int a = 16, b = 10;

    int vl_mdc = mdc(a,b);

    printf("O mdc de %i e %i é: %i \n", a, b, vl_mdc);

    return 0;
}


int mdc(int a, int b){

    int mini = mini_num(a,b);

    for(int i = mini; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
    return 1;
}

int mini_num(int a, int b){
    int mini;
    if (a < b){
        mini = a;
    }else{
        mini = b;
    }
    return mini;
}









//Sharline Aparecida Vieira
