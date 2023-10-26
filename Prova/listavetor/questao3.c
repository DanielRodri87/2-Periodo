#include <stdio.h>
#define t 10

void primo(int vetor[t])
{
    for (int i = 0; i < t; i++)
    {
        int cont = 0;
        for (int j = 1; j <= vetor[i]; j++)
        {
            if (vetor[i] % j == 0)
            {
                cont++;
            }
        }
        if (cont == 2)
        {
            printf("vetor[%d] = %d\n", i, vetor[i]);
        }
        
    }
}

int main()
{
    int vetor[t];
    for (int i = 0; i < t; i++)
    {
        printf("Digite o valor de vetor[%d]: ", i+1);
        scanf("%d", &vetor[i]);

    }
    primo(vetor);
    return 0;
}