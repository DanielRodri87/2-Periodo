#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &qtd);
    int *vetor = (int *) malloc(qtd * sizeof(int));
    

    return 0;
}