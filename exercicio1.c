//1 - Suponha uma matriz de 3 linhas por 3 colunas do tipo inteiro.
//Leia os valores dessa matriz, depois informe qual é o maior e o menor elemento.

#include <stdio.h>

int main() {
    int matriz[3][3], maior, menor;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
    
    maior = menor = matriz[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) maior = matriz[i][j];
            if (matriz[i][j] < menor) menor = matriz[i][j];
        }

    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}
