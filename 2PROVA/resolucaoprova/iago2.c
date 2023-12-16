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

    int qtd;
    printf("Digite a nova quantidade de números: ");
    scanf("%d", &qtd);

    printf("Antes de atualizar:\n");
    for (i = 0; i < qtd; i++)
        printf("%d ", vetor[i]);

    printf("\n");
    
    vetor = (int *) realloc(vetor, qtd * sizeof(int));

    for (i = 5; i < qtd; i++)
    {
        printf("Informe o valor do %d item: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Antes de atualizar:\n");
    for (i = 0; i < qtd; i++)
        printf("%d ", vetor[i]);

    return 0;
}

