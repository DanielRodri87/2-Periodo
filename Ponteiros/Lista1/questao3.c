#include <stdio.h>

int tam, i, saida;

int maior_elemento(int *vet, int tam)
{
    int maior = *vet;  
    for (int i = 1; i < tam; i++)
    {
        if (maior < *(vet + i))
        {
            maior = *(vet + i);
        }
    }
    return maior;
}


int main()
{
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];

    for (i = 0; i < tam; i++)
    {
        printf("Digite o valor do %d° elemento do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    saida = maior_elemento(vetor, tam);
    printf("O maior elemento é: %d\n", saida);

    return 0;
}
