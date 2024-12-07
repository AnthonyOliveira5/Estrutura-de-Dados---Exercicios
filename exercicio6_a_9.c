//6 – Fazer um programa em Linguagem C que criem uma estrutura de dados voo(struct voo) para a empresa VOEBEM, que servirá para implementar funções para controle da lista

//dos voos. A estrutura voo deve ser implementada de forma dinâmica e deve conter os seguintes dados:

//número do voo - inteiro;

//data do voo - inteiro: (1 - seg, 2 - ter, 3 - qua, 4- qui, 5 - sex, 6 - sab, 7 - dom, 8 - diario);

//horário do voo - hora inteiro, min inteiro;

//aeroporto de Saída - inteiro - id do aeroporto;

//aeroporto de Chegada - inteiro - id do aeroporto;

//rota - inteiro id;

//tempo estimado de voo - float;

//passageiros a bordo - inteiro;

// 7 - Implementar a função cadastrarVoo() que deve permitir o cadastro de um novo voo;

// 8 - Implementar a função consultaVoo() que deve permitir obter as informações do voo com base na digitação do número do voo;

// 9 - Implementar a função removeVoo() que permita a exclusão de um determinado voo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Voo {
    int numero;
    int data;
    int hora, min;
    int saida, chegada, rota;
    float tempoEstimado;
    int passageiros;
    struct Voo *prox;
} Voo;

void cadastrarVoo(Voo **lista) {
    Voo *novo = malloc(sizeof(Voo));
    scanf("%d %d %d %d %d %d %d %f %d",
          &novo->numero, &novo->data, &novo->hora, &novo->min, 
          &novo->saida, &novo->chegada, &novo->rota, 
          &novo->tempoEstimado, &novo->passageiros);
    novo->prox = *lista;
    *lista = novo;
}

void consultaVoo(Voo *lista, int numero) {
    while (lista) {
        if (lista->numero == numero) {
            printf("Voo %d encontrado.\n", lista->numero);
            return;
        }
        lista = lista->prox;
    }
    printf("Voo nao encontrado.\n");
}

void removeVoo(Voo **lista, int numero) {
    Voo *atual = *lista, *anterior = NULL;

    while (atual) {
        if (atual->numero == numero) {
            if (anterior)
                anterior->prox = atual->prox;
            else
                *lista = atual->prox;
            free(atual);
            printf("Voo %d removido.\n", numero);
            return;
        }
        anterior = atual;
        atual = atual->prox;
    }
    printf("Voo nao encontrado.\n");
}
