#include <stdio.h>

int main()
{
    int x[5] = {1, 2, 3, 4, 5}, y[5] = {5, 4, 3, 2, 1}, i, aux[5];
    for (i = 0; i < 5; i++)
    {
        aux[i] = x[i];
        x[i] = y[i];
        y[i] = aux[i];

        
    }
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