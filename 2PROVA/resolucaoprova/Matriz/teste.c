#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int **mat);
void exibirMatriz(int **mat);
void somaDiagonarPrincipal(int ** mat);
void somaDiagonalsecundaria(int **mat);
void transporMatriz(int **mat);


int main()
{
    int i;
    int **matriz = (int **) malloc(3 * sizeof(int *));

    for (i = 0; i < 3; i ++)
        matriz[i] = (int *) malloc(3 * sizeof(int));

    
    preencherMatriz(matriz);
    printf("Exibindo matriz\n");
    exibirMatriz(matriz);

    printf("\n");  

    somaDiagonarPrincipal(matriz);
    somaDiagonalsecundaria(matriz);

    printf("\nAntes: \n");  
    exibirMatriz(matriz);
    transporMatriz(matriz);

    printf("\nDepois \n");  
    exibirMatriz(matriz);

    for (int i = 0; i < 3; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

void preencherMatriz(int **mat)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Informe matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void exibirMatriz(int **mat)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void somaDiagonarPrincipal(int **mat)
{
    int i, j;
    int soma = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if (i == j)
            {
                soma += mat[i][j];
            }
        }
    }

    printf("A soma da diagonal principal é: %d\n", soma);
}

void somaDiagonalsecundaria(int **mat)
{
    int i;
    int soma = 0;
    for(i = 0; i < 3; i++)
    {
        soma += mat[i][2 - i];
    }

    printf("A soma da diagonal secundária é: %d\n", soma);
}

void transporMatriz(int **mat)
{
    int aux, i, j;
    for(i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            aux = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = aux;
        }
    }
}