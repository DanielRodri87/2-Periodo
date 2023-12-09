#include <stdio.h>
#include <stdlib.h>

int **multiplica_matrizes(int **matriz1, int **matriz2, int linhas1, int colunas1, int linhas2, int colunas2)
{
    int **matriz_resultante = (int **)malloc(linhas1 * sizeof(int *));
    for (int i = 0; i < linhas1; i++)
    {
        matriz_resultante[i] = (int *)malloc(colunas2 * sizeof(int));
    }
    for (int i = 0; i < linhas1; i++)
    {
        for (int j = 0; j < colunas2; j++)
        {
            matriz_resultante[i][j] = 0;
            for (int k = 0; k < colunas1; k++)
            {
                matriz_resultante[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return matriz_resultante;
}

int main()
{
    int linhas1, colunas1, linhas2, colunas2;
    printf("Informe o número de linhas da matriz 1: ");
    scanf("%d", &linhas1);
    printf("Informe o número de colunas da matriz 1: ");
    scanf("%d", &colunas1);
    printf("Informe o número de linhas da matriz 2: ");
    scanf("%d", &linhas2);
    printf("Informe o número de colunas da matriz 2: ");
    scanf("%d", &colunas2);
    if (colunas1 != linhas2)
    {
        printf("Não é possível multiplicar as matrizes.\n");
        return 0;
    }
    int **matriz1 = (int **)malloc(linhas1 * sizeof(int *));
    for (int i = 0; i < linhas1; i++)
    {
        matriz1[i] = (int *)malloc(colunas1 * sizeof(int));
    }
    int **matriz2 = (int **)malloc(linhas2 * sizeof(int *));
    for (int i = 0; i < linhas2; i++)
    {
        matriz2[i] = (int *)malloc(colunas2 * sizeof(int));
    }
    printf("Informe os valores da matriz 1:\n");
    for (int i = 0; i < linhas1; i++)
    {
        for (int j = 0; j < colunas1; j++)
        {
            printf("Informe o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Informe os valores da matriz 2:\n");
    for (int i = 0; i < linhas2; i++)
    {
        for (int j = 0; j < colunas2; j++)
        {
            printf("Informe o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    int **matriz_resultante = multiplica_matrizes(matriz1, matriz2, linhas1, colunas1, linhas2, colunas2);
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas1; i++)
    {
        for (int j = 0; j < colunas2; j++)
        {
            printf("%d ", matriz_resultante[i][j]);
        }
        printf("\n");
    }
    return 0;
}
