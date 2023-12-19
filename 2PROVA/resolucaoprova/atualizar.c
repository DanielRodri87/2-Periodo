#include <stdio.h>
#include <stdlib.h>

void preencher(int *vet);

int main()
{
    int *vetor = (int *)malloc(5 * sizeof(int));


    preencher(vetor);

    printf("Para quanto deseja aumentar? ");
    int tam;
    scanf("%d", &tam);

    free(vetor);

    vetor = (int *)realloc(vetor, tam * sizeof(int));
    
    free(vetor);

    return 0;
}

void preencher(int *vet)
{
    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &vet[i]);
}
