#include <stdio.h>

int main()
{
    int vetor[5][5], l, c;
    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            if (l == c)
            {
                vetor[l][c] = 1;
            } else
            {
                vetor[l][c] = 0;
            }
        }
    }

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("%d\t", vetor[l][c]);
        }
        printf("\n");
    }
    return 0;
}