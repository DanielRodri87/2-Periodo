#include <stdio.h>

int x[5] = {1, 2, 3, 4, 5}, y[5] = {5, 4, 3, 2, 1}, i, aux[5];

void trocar(int aux[], int x[], int y[])
{
    for (i = 0; i < 5; i++)
    {
        aux[i] = x[i];
        x[i] = y[i];
        y[i] = aux[i];

        
    }
}

int main()
{
    trocar(aux, x, y);
    printf("Valores de X: \n");
    for (i = 0; i <5; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\nValores de Y: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", y[i]);
    }

    return 0;
}