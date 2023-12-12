#include <stdio.h>
#include <stdlib.h>

// 2.	Escreva um programa em C que faça a alocação dinâmica de uma matriz de números inteiros, com de
// dimensões definidas pelo usuário e, em seguida, faça a leitura. O próximo passo é implementar uma função
// que receba um valor, retorne 1 caso o valor esteja na matriz ou retorne zero caso não esteja na matriz.

int pesquisavetor(int *vetor, int tamanho)
{
    int q;
    printf("Pesquisar: ");
    scanf("%d", &q);
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == q)
        {
            return 1;
        }
    }
    return 0;

}

int main()
{
    int num, resultado;
    printf("Digite quantos valores você deseja armazenar: ");
    scanf("%d", &num);

    int *vetor = (int *)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        printf("Digite o valor do %d° elemento: ", i+1);
        scanf("%d", &vetor[i]);
    }

    resultado = pesquisavetor(vetor, num);
    printf("1 - Encontrado || 0 - Não Encontrado\nStatus -> %d\n", resultado);

    free(vetor);

    return 0;
}