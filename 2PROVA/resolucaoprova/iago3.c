#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 5

void preencherSorteio(int *vetor);
void exibirVetor(int *vetor, int n_tam);
void atualizarVetor(int *vetor, int n_tam);

int main()
{
    int *vetor = (int *) malloc(tam * sizeof(int));
    int menu, novo_tamanho = tam;

    preencherSorteio(vetor);
    exibirVetor(vetor, novo_tamanho);

    printf("Você deseja atualizar o tamanho do vetor?\n1 - Sim\n2 - Não\n--> ");
    scanf("%d", &menu);
    if (menu == 1)
    {
        printf("Informe o novo tamanho do vetor: ");
        scanf("%d", &novo_tamanho);
        atualizarVetor(vetor, novo_tamanho);
        exibirVetor(vetor, novo_tamanho);
    }

    return 0;
}

void preencherSorteio(int *vetor)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
        vetor[i] = rand() % 100;
}

void exibirVetor(int *vetor, int n_tam)
{
    int i;

    printf("Exibindo vetor: \n");
    for (i = 0; i < n_tam; i++)
        printf("%d ", vetor[i]);

    printf("\n");
}


void atualizarVetor(int *vetor, int n_tam)
{
    vetor = (int *) realloc(vetor, n_tam * sizeof(int));

    int i;
    srand(time(NULL));
    for (i = tam; i < n_tam; i++)
        vetor[i] = rand() % 100;
}