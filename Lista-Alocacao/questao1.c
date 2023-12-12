#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void entrada(int n)
{
    printf("Digite quantos valores você deseja armazenar: ");
    scanf("%d", &n);

    if (n < 10)
    {
        printf("O número de valores deve ser maior ou igual a 10\n");
        exit(1);
    }

}

void preencheVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 100;
    }
}

int main()
{
    int num;
    entrada(num);
    int *vetor = (int *)malloc(num * sizeof(int));
    preencheVetor(vetor, num);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    
    return 0;
}