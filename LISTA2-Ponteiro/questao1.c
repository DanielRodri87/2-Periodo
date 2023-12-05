#include <stdio.h>

void ordenacrescente(int *vetor, int tamanho)
{
    int i, j, aux;
    for (i = 0; i < tamanho; i++)
    {
        for (j = i + 1; j < tamanho; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

}

void ordenadecrescente(int *vetor, int tamanho)
{
    int i, j, aux;
    for (i = 0; i < tamanho; i++)
    {
        for (j = i + 1; j < tamanho; j++)
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
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam], i;
    for (i = 0; i < tam; i++)
    {
        printf("Informe o valor do %d° elemento: ", i);
        scanf("%d", &vetor[i]);
    }

    ordenacrescente(vetor, tam);
    printf("Vetor em ordem crescente: ");
    for (i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);

    }
    printf("\n");

    ordenadecrescente(vetor, tam);
    printf("Vetor em ordem decrescente: ");
    for (i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);

    }



    return 0;
}