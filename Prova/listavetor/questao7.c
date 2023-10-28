#include <stdio.h>

int main()
{
    int vetor[4][4], l, c, count = 0;
    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("Digite o valor para vetor[%d][%d]: ", l+1, c+1);
            scanf("%d", &vetor[l][c]);
        }
    }
    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            if (vetor[l][c] > 10)
            {
                count++;
            }
        }
    }

    printf("Existem %d maior(es) que 10\n", count);
    return 0;
}