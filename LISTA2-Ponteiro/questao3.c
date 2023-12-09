#include <stdio.h>
#include <stdlib.h>

void preencherMatrizEspiral(int tam, int **mat);

void imprimirMatriz(int tam, int **mat);

int main()
{
    int tam;

    printf("Digite o tamanho da matriz (ímpar): ");
    scanf("%d", &tam);

    if (tam % 2 == 0)
    {
        printf("Por favor, insira um número ímpar para o tamanho da matriz.\n");
        return 1;
    }

    int *mat = (int *)malloc(tam * sizeof(int *));
    for (int i = 0; i < tam; i++)
    {
        mat[i] = (int *)malloc(tam * sizeof(int));
    }

    preencherMatrizEspiral(tam, mat);

    printf("Matriz em forma de espiral:\n");
    imprimirMatriz(tam, mat);

    for (int i = 0; i < tam; i++)
    {
        free(mat[i]);
    }
    free(mat);

    return 0;
}

void preencherMatrizEspiral(int tam, int **mat)
{
    int valor = tam * tam;
    int i, j;
    int linha_inicio = 0, linha_fim = tam - 1;
    int coluna_inicio = 0, coluna_fim = tam - 1;

    while (linha_inicio <= linha_fim && coluna_inicio <= coluna_fim)
    {
        for (j = coluna_fim; j >= coluna_inicio; j--)
        {
            mat[linha_inicio][j] = valor--;
        }
        linha_inicio++;

        for (i = linha_inicio; i <= linha_fim; i++)
        {
            mat[i][coluna_inicio] = valor--;
        }
        coluna_inicio++;

        for (j = coluna_inicio; j <= coluna_fim; j++)
        {
            mat[linha_fim][j] = valor--;
        }
        linha_fim--;

        for (i = linha_fim; i >= linha_inicio; i--)
        {
            mat[i][coluna_fim] = valor--;
        }
        coluna_fim--;
    }
}

void imprimirMatriz(int tam, int **mat)
{
    int i, j;
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
}