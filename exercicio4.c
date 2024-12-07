//4 – Centro meterológico - Um centro meteorológico distribuiu dispositivos para registrar índices pluviométricos em um conjunto de 7 cidades de uma região (identificadas por códigos numéricos de 1 a 7) durante 6 meses(Jan a Jun), onde, para cada mês foi registrado um valor real que corresponde ao índice pluviométrico total do mês.

//Escreva um programa que leia os 6 índices pluviométricos de cada uma das sete cidades e imprima:

//a) O índice de pluviosidade médio mensal de cada cidade;

//b) O índice de pluviosidade média de cada mês na região.

#include <stdio.h>

int main() {
    float indices[7][6], mediaCidade[7], mediaMes[6] = {0};

    for (int i = 0; i < 7; i++) {
        mediaCidade[i] = 0;
        for (int j = 0; j < 6; j++) {
            scanf("%f", &indices[i][j]);
            mediaCidade[i] += indices[i][j];
            mediaMes[j] += indices[i][j];
        }
        mediaCidade[i] /= 6.0;
    }

    for (int j = 0; j < 6; j++)
        mediaMes[j] /= 7.0;

    for (int i = 0; i < 7; i++)
        printf("Cidade %d: %.2f\n", i + 1, mediaCidade[i]);
    for (int j = 0; j < 6; j++)
        printf("Mes %d: %.2f\n", j + 1, mediaMes[j]);

    return 0;
}
