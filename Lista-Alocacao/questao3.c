
#include <stdio.h>
#include <stdlib.h>

void preencher(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void ordenardecrescente(int *vetor, int tamanho)
{
    int aux;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int main()
{
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    preencher(vetor, tamanho);
    ordenardecrescente(vetor, tamanho);

    printf("Vetor ordenado em ordem decrescente: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    free(vetor);

    return 0;
}