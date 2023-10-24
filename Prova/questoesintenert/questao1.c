#include <stdio.h>

int main()
{
    int vetor[6];
    int i, pares = 0, somap = 0,numim = 0, impares[6];
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            pares++;
            somap += vetor[i];
        }
        else
        {
            impares[numim] = vetor[i];
            numim++;
        }
    }

    printf("Pares: %d\n", pares);
    printf("Soma dos Pares: %d\n", somap);
    printf("Impares: ");
    for (i = 0; i < numim; i++)
    {
        printf("%d ", impares[i]);
    }
    printf("\n");


    return 0;
}