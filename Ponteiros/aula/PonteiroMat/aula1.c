// Descobrir a soma da diagonal principal com ponteiros

#include <stdio.h>

void diagonal(int matriz[][3], int n)
{
    int i, j, soma = 0;
    int *p = &matriz[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++, p++)
        {
            if (i == j)
            {
                soma += *p;
            }
        }
    }
    printf("A soma da diagonal principal eh: %d\n", soma);
}
int main()
{
    int tam;
    printf("Digite os elementos da matriz:\n");
    scanf("%d", &tam);

    int matriz[tam][tam], i, j;

    for (i = 0; i < tam; i++)
    {
        printf("Digite os elementos da linha %d:\n", i + 1);
        for (j = 0; j < tam; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    diagonal(matriz, 3);
    return 0;
}