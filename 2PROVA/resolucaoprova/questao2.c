#include <stdio.h>
#include <stdlib.h>

void preenchervetor(int *vetor1, int *vetor2, int tam1, int tam2);
int verificartamanho(int tam1, int tam2);
int verificarValoresComuns(int *vetor1, int *vetor2, int tam1, int tam2);
int verificarsoma(int *vetor1, int *vetor2, int tam1, int tam2);

int main()
{
    int tam1, tam2, boolean_tamanho, valores_iguais, boolean_soma;
    printf("Informe o tamanho do vetor 1: ");
    scanf("%d", &tam1);
    printf("Informe o tamanho do vetor 2: ");
    scanf("%d", &tam2);

    int *vetor1 = (int *) malloc(tam1 * sizeof(int));
    int *vetor2 = (int *) malloc(tam2 * sizeof(int));

    preenchervetor(vetor1, vetor2, tam1, tam2);
    boolean_tamanho = verificartamanho(tam1, tam2);
    valores_iguais = verificarValoresComuns(vetor1, vetor2, tam1, tam2);
    boolean_soma = verificarsoma(vetor1, vetor2, tam1, tam2);

    if (boolean_tamanho == 1)
        printf("O tamanho dos vetores é igual\n");
    else
        printf("O tamanho dos vetores é diferente\n");

    if (valores_iguais == 1)
        printf("Os vetores possuem pelo menos um valor igual\n");
    else
        printf("O vetores não possuem valores iguais\n");

    if (boolean_soma == 1)
        printf("A soma dos vetores é igual\n");
    else
        printf("A soma dos vetores é diferente\n");

    free(vetor1);
    free(vetor2);
    

    return 0;
}

void preenchervetor(int *vetor1, int *vetor2, int tam1, int tam2)
{
    int i;
    for (i = 0; i < tam1; i++)
    {
        printf("Infome o %d valor do Vetor 1: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    printf("\n");
    for (i = 0; i < tam2; i++)
    {
        printf("Infome o %d valor do Vetor 2: ", i+1);
        scanf("%d", &vetor2[i]);
    }
}

int verificartamanho(int tam1, int tam2)
{
    int tamanho1 = 0, tamanho2 = 0, i;

    for (i = 0; i < tam1; i++)
        tamanho1++;

    for (i = 0; i < tam2; i++)
        tamanho2++;


    if (tamanho1 == tamanho2)
        return 1;

    return 0;
}

int verificarValoresComuns(int *vetor1, int *vetor2, int tam1, int tam2)
{
    int i, j;
    for (i = 0; i < tam1; i++)
    {
        for (j = 0; j < tam2; j++)
        {
            if (vetor1[i] == vetor2[j])
                return 1;
        }
    }
    return 0;
}

int verificarsoma(int *vetor1, int *vetor2, int tam1, int tam2)
{
    int soma1 = 0, soma2 = 0, i;

    for (i = 0; i < tam1; i++)
        soma1+= vetor1[i];

    for (i = 0; i < tam2; i++)
        soma2 += vetor2[i];

    printf("A soma1: %d\nA Soma2: %d\n", soma1, soma2);

    if (soma1 == soma2)
        return 1;

    return 0;
}
