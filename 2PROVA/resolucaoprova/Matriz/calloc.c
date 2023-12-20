// Usar calloc para fazer uma matriz, essa matriz terá uma cruz com "1" e o resto será preenchido com 0

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matriz;
    int linhas, colunas;

    printf("Informe a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Informe a quantidade de colunas: ");
    scanf("%d", &colunas);

    if (linhas % 2 != 0 && colunas % 2 != 0)
    {
        matriz = (int **) calloc(linhas, sizeof(int *));
        for (int i = 0; i < linhas; i++)
            matriz[i] = (int *) calloc(colunas, sizeof(int));

        for(int i = 0; i < linhas; i++)
        {
            for(int j = 0; j < colunas; j++)
            {
                if(i == linhas/2 || j == colunas/2)
                    matriz[i][j] = 1;
            }
        }

        printf("\nMatriz:\n");
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

        for (int i = 0; i < linhas; i++)
        {
            free(matriz[i]);
        }
        free(matriz);
    } else
        printf("A matriz deve ser impar");

    return 0;
}