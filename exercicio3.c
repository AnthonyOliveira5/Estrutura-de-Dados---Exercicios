//3 – Notas da turma - Fazer um programa para ler as notas de 4 provas para 5 alunos de uma turma e calcular a média do aluno e média da turma

#include <stdio.h>

int main() {
    float notas[5][4], mediaAluno[5], mediaTurma = 0;

    for (int i = 0; i < 5; i++) {
        mediaAluno[i] = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%f", &notas[i][j]);
            mediaAluno[i] += notas[i][j];
        }
        mediaAluno[i] /= 4.0;
        mediaTurma += mediaAluno[i];
    }

    mediaTurma /= 5.0;
    for (int i = 0; i < 5; i++)
        printf("Aluno %d: %.2f\n", i + 1, mediaAluno[i]);
    printf("Media da turma: %.2f\n", mediaTurma);
    return 0;
}
