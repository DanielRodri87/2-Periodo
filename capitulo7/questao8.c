#include <stdio.h>

int main()
{
    int matriz[5] = {1,2,3,4,5,6,7,8}; // Declaração errada, pois não é possível inicializar um vetor com mais de um valor.

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", matriz[i]);
    }
    return 0;
}