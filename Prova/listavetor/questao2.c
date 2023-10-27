#include <stdio.h>
#define t 5
int main()
{
    int codigo;
    float vetor[t];

    for (int i = 0; i < t; i++)
    {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
    }
    printf("Digite o codigo:\n1 - Ordem Direta\n2 - Ordem Inversa\n0 - Sair\n");
    scanf("%d", &codigo);
    switch (codigo)
    {
    case 1:
        for (int i = 0; i < t; i++)
        {
            printf("vetor[%d] = %.2f\n", i, vetor[i]);
        }
        break;
    case 2:
        for (int i = t-1; i >= 0; i--)
        {
            printf("vetor[%d] = %.2f\n", i, vetor[i]);
        }
        break;
    case 0:
        printf("Saindo...\n");
        break;
    default:
        printf("Codigo invalido\n");
        break;
    }
}