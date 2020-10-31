//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*20. Um automóvel possui um medidor que informa de tempos em tempos a um velocímetro digital a distância percorrida (em metros) e o tempo gasto (em segundos). O velocímetro acumula algumas medições e eventualmente realiza cálculos para atualizar o valor da velocidade (em km/h) mostrada
no display do automóvel. Desenvolva um programa que:
• Leia uma sequência de pares de valores na forma: distância percorrida<espaço>tempo gasto<enter>;
• Acumule os valores e quando receber um par de zeros, imprime na saída a velocidade média em
km/h, zerando os acumuladores;
• O programa é encerrado quando recebe um par de -1;
20 0.5
50 0.5
0 0
Saida: 252.00
20 0.5
120.5 2.0
0 0
Saida: 202.32
-1 -1
Encerra programa
*/

int main() {
    setlocale(LC_ALL, "");

    double distancia=0, tempo=0, distancia_acumulada=0, tempo_acumulado=0;

    while (distancia != -1 && tempo != -1) {
        scanf("%lf %lf", &distancia, &tempo);

        distancia_acumulada += distancia;
        tempo_acumulado += tempo;

        if (tempo == 0 && distancia == 0)
            printf("%.2lf Km/h\n", (distancia_acumulada/1000) / (tempo_acumulado/3600));
    }
    return 0;
}










//Sharline Aparecida Vieira
