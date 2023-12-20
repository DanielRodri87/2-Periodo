#include <stdio.h>
#include <stdlib.h>

void transporMatriz(int **matriz, int tam);

int main()
{
    int size, i, j;
    printf("Informe o tamanho da Matriz Quadrada: ");
    scanf("%d", &size);

    int **matriz = (int **) malloc(size * sizeof(int *));
    for (i = 0; i < size; i++)
    {
        matriz[i] = (int *) malloc (size * sizeof(int));
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    transporMatriz(matriz, size);

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }



    for (int i = 0; i < size; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}


void transporMatriz(int **matriz, int tam)
{
    int temp;
    for (int i = 0; i < tam; i++) {
        for (int j = i+1; j < tam; j++) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
}