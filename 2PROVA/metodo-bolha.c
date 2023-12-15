#include <stdio.h>
#include <stdlib.h>

void crescente(int *vetor)
{
    int i, j, aux;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int main()
{
    int *vetor = (int *) malloc(10 * sizeof(int));
    int i, saida;
    for (i = 0; i < 10; i++)
    {
        printf("Informe o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    crescente(vetor);

    printf("O vetor em ordem crescente é:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", vetor[i]);

    printf("\n");

    free(vetor);

    return 0;

}