#include <stdio.h>

int main()
{
    int vetor[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    int menor = vetor[0], maior = 0, meio = 0;

    for (int i = 0; i < 3; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        } else if (vetor[i] < menor)
        {
            menor = vetor[i];

        } else if (vetor[i] > menor && vetor[i] < maior)
        {
            meio = vetor[i];
        }
    }

    printf("Maior: %d\nMeio: %d\nMenor: %d\n", maior, meio, menor);

    return 0;
}