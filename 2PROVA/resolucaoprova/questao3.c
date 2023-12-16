#include <stdio.h>
#include <stdlib.h>

int verificaPreencherMatriz(int l, int c);
int somaDiagonalPrincipal(int **matriz, int l, int c);
int somaDiagonalSecundaria(int **matriz, int l, int c);

int main()
{
    int col1, linha1, verificar, i, j;

    printf("Informe a quantidade de linhas e colunas da Matriz: ");
    scanf("%d %d", &linha1, &col1);

    verificar = verificaPreencherMatriz(linha1, col1);

    if (verificar == 1)
    {
        int **matriz;
        matriz = (int **)malloc(linha1 * sizeof(int *));
        for (i = 0; i < linha1; i++)
        {
            matriz[i] = (int *)malloc(col1 * sizeof(int));
            for (j = 0; j < col1; j++)
            {
                printf("Informe o valor para Matriz[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matriz[i][j]);
            }
        }

        int somaPrincipal = somaDiagonalPrincipal(matriz, linha1, col1);
        int somaSecundaria = somaDiagonalSecundaria(matriz, linha1, col1);

        printf("A soma da diagonal principal é: %d\n", somaPrincipal);
        printf("A soma da diagonal secundária é: %d\n", somaSecundaria);

        for (i = 0; i < linha1; i++)
            free(matriz[i]);

        free(matriz);
    }
    else
        printf("A matriz não é quadrada\n");

    return 0;
}

int verificaPreencherMatriz(int l, int c)
{
    if (l == c)
        return 1;
    return 0;
}

int somaDiagonalPrincipal(int **matriz, int l, int c)
{
    int i, j, soma = 0;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i==j)
                soma += matriz[i][j];
        }
    }
    return soma;
}

int somaDiagonalSecundaria(int **matriz, int l, int c)
{
    int i, soma = 0;
    for (i = 0; i < l; i++)
    {
        soma += matriz[i][c - 1 - i];
    }
    return soma;
}


