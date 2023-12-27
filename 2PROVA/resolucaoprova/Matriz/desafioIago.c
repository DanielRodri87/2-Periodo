// Crie um programa em C que construa uma lista encadeada de números inteiros. Permita ao usuário adicionar
// remover e pesquisar elementos na lista. Utilize alocação dinâmica para criar e liberar nós da lista.

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} No;

typedef struct lista {
    No *inicio;
    No *fim;
} Lista;

void inicializa(Lista *l) {
    l->inicio = NULL;
    l->fim = NULL;
}

void insere(Lista *l, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    if (l->inicio == NULL) {
        l->inicio = novo;
        l->fim = novo;
    } else {
        l->fim->prox = novo;
        l->fim = novo;
    }
}

void imprime(Lista *l) {
    No *aux = l->inicio;
    while (aux != NULL) {
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}

void remove(Lista *l, int valor) {
    No *aux = l->inicio;
    No *ant = NULL;

    while (aux != NULL) {
        if (aux->valor == valor) {
            if (ant == NULL) {
                l->inicio = aux->prox;
            } else {
                ant->prox = aux->prox;
            }
            free(aux);
            return;
        }
        ant = aux;
        aux = aux->prox;
    }
}


int main() {
    Lista l;
    inicializa(&l);

    insere(&l, 10);
    insere(&l, 20);
    insere(&l, 30);
    insere(&l, 40);
    insere(&l, 50);
    insere(&l, 60);
    insere(&l, 70);
    insere(&l, 80);
    insere(&l, 90);
    insere(&l, 100);

    imprime(&l);

    remove(&l, 10);
    remove(&l, 20);
    remove(&l, 30);
    remove(&l, 40);
    remove(&l, 50);
    remove(&l, 60);
    remove(&l, 70);
    remove(&l, 80);
    remove(&l, 90);
    remove(&l, 100);

    imprime(&l);

    return 0;
}

