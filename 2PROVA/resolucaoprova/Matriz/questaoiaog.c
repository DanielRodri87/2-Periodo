// Crie um programa em C que construa uma lista encadeada de números inteiros. Permita ao usuário
// adicionar, remover e pesquisar elementos na lista. Utilize alocação dinâmica para criar e liberar
// nós da lista.

#include <stdio.h>
#include <stdlib.h>

int adicionarItem(int *vet, int tam);
void pesquisarItem(int *vet, int tam);
void deletarItem(int *vet, int tam);
void exibirItens(int *vet, int tam);

int main()
{
    int menu, qtd;

    printf("Informe a quantidade inicial de itens no vetor: ");
    scanf("%d", &qtd);
    int *vetor = (int *) malloc(qtd * sizeof(int));


    printf("\nTela de adicionar\n");
    qtd = adicionarItem(vetor, qtd);

    printf("\nTela de pesquisar\n");
    pesquisarItem(vetor, qtd);

    printf("Exibindo lista antes exclusão: ");
    exibirItens(vetor, qtd);

    printf("\nTela de deletar\n");
    deletarItem(vetor, qtd);

    printf("Exibindo lista após exclusão: ");
    exibirItens(vetor, qtd);

    return 0;
}

int adicionarItem(int *vet, int tam)
{
    int opcao;

    int novoTam;
    printf("O vetor tem %d posicões\nDeseja alterar? 1- Sim 2- Não: ", tam);
    scanf("%d", &opcao);
    if (opcao == 1)
        printf("Informe o novo tamanho: ");
        scanf("%d", &novoTam);
        vet = (int *) realloc(vet, tam * sizeof(int));
        tam = novoTam;

    for (int i = 0; i < tam; i++)
    {
        printf("Informe o valor da posição %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    return tam;

}

void pesquisarItem(int *vet, int tam)
{
    int search, i;
    printf("Informe o valor que você deseja pesquisar: ");
    scanf("%d", &search);
    for(i = 0; i < tam; i++)
    {
        if (vet[i] == search)
            printf("O item %d, está na posição %d\n", vet[i], i);
    }
}

void deletarItem(int *vet, int tam)
{
    int search, i;
    printf("Informe o valor que você deseja remover: ");
    scanf("%d", &search);
    for(i = 0; i < tam; i++)
    {
        if (vet[i] == search)
            vet[i] = (char)'f';
    }

}

void exibirItens(int *vet, int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if (vet[i] != 'f')
        {
            printf("%d ", vet[i]);
        }
    }
}