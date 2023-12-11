#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *) malloc(5*sizeof(int));

    if (p == NULL)
    {
        printf("Erro: Sem memória!\n");
        exit(1);
    }

    int i;
    for (i = 0; i < 5; i ++)
    {
        printf("Digite o valor: ");
        scanf("%d", &p[i]);
    }

    printf("Valor do vetor:\n");
    for (i = 0; i < 5; i ++)
        printf("%d ", p[i]);

// libero memória alocada
    free(p);

    return 0;
}