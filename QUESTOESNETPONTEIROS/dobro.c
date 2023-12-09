#include <stdio.h>

void dobrar(int *vetor, int *size)
{
    int i;
    for (i = 0; i < *size; i++)
    {
        vetor[i] *= 2;
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main()
{
    int size;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &size);

    int vetor[size], i;

    for (i = 0; i < size; i++)
    {
        printf("Preencha o %d° valor do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    dobrar(vetor, &size);

    return 0;
}