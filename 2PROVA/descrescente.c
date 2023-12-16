#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *vetor = (int *) malloc (5 * sizeof(int));
    //  preencher
    for (i = 0; i < 5; i++)
    {
        printf("Informe a posição do %d valor: ");
        scanf("%d", &vetor[i]);
    }
    return 0;
}