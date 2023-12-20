#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matriz = (int **) malloc(3 * sizeof(int*));
    for (int i = 0; i < 3; i++)
        matriz[i] = (int *) malloc(3 * sizeof(int));
}