//10 - Faça uma rotina recursiva para calcular a somatória de todos os número de 1 a N (N será lido do teclado).

//Observação: se N é igual a 5 por exemplo, A somatória dos números será igual a 15, ou seja, 1+2+3+4+5 = 15

#include <stdio.h>

int soma(int n) {
    if (n == 0) return 0;
    return n + soma(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", soma(n));
    return 0;
}
