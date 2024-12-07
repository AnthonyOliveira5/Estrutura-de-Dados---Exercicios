//2 – Faça um jogo da velha

#include <stdio.h>

void exibeTabuleiro(char tab[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%c ", tab[i][j]);
        printf("\n");
    }
}

int verificaVencedor(char tab[3][3]) {
    for (int i = 0; i < 3; i++)
        if (tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2] && tab[i][0] != ' ')
            return 1;
    for (int j = 0; j < 3; j++)
        if (tab[0][j] == tab[1][j] && tab[1][j] == tab[2][j] && tab[0][j] != ' ')
            return 1;
    if (tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] && tab[0][0] != ' ')
        return 1;
    if (tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0] && tab[0][2] != ' ')
        return 1;
    return 0;
}

int main() {
    char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int x, y, jogadas = 0, vez = 0;

    while (jogadas < 9) {
        exibeTabuleiro(tabuleiro);
        printf("Jogador %d, insira a linha e coluna: ", vez + 1);
        scanf("%d %d", &x, &y);

        if (tabuleiro[x][y] == ' ') {
            tabuleiro[x][y] = vez == 0 ? 'X' : 'O';
            jogadas++;
            if (verificaVencedor(tabuleiro)) {
                exibeTabuleiro(tabuleiro);
                printf("Jogador %d venceu!\n", vez + 1);
                return 0;
            }
            vez = 1 - vez;
        } else {
            printf("Posição inválida!\n");
        }
    }
    exibeTabuleiro(tabuleiro);
    printf("Empate!\n");
    return 0;
}
