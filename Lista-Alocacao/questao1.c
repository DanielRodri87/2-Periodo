#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 100;
    }
}

int main()
{
    int n;
    printf("Digite quantos valores você deseja armazenar: ");
    scanf("%d", &n);

    if (n < 10)
    {
        printf("O número de valores deve ser maior ou igual a 10\n");
        return 0;
    }
    int *vetor = (int *)malloc(n * sizeof(int));
    preencheVetor(vetor, n);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    
    return 0;
}