#include <stdlib.h>
#include <stdio.h>

void preencherMatriz(int **vet, int l, int c);
int termoCentral(int **matriz, int linhas, int colunas);

int main()
{
    int l, c, i, central;
    printf("Informe a quantidade de linhas e colunas da matriz: ");
    scanf("%d %d", &l, &c);
    int **matriz = (int **) malloc(l * sizeof(int *));
    
    for (i = 0; i < l; i++)
        matriz[i] = (int *) malloc(c * sizeof(int));

    preencherMatriz(matriz, l, c);
    central = termoCentral(matriz, l, c);
    printf("O termo central é: %d", central);
    return 0;
}

void preencherMatriz(int **vet, int l, int c)
{
    int i, j;
    for(i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Informe o valor de matriz[%d][%d]: ", i, j);
            scanf("%d", &vet[i][j]);
        }
    }
}

int termoCentral(int **matriz, int linhas, int colunas)
{
    int saida;
    for (int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            if (i == linhas/2 && j == colunas/2)
                saida = matriz[i][j];
        }
    }

    return saida;
}

int multiplicarcentral(int **matriz, int l, int c, int centro)
{

}