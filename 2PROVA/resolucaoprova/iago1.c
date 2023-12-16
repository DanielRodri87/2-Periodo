#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *vetor = (int *) malloc(5 * sizeof(int));
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Informe o valor do %d item: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Antes de atualizar:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", vetor[i]);

    printf("\n");
    
    vetor  = (int *) realloc(vetor, 10 * sizeof(int));

    for (i = 5; i < 10; i++)
    {
        printf("Informe o valor do %d item: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Depois de atualizar:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", vetor[i]);
    return 0;
}