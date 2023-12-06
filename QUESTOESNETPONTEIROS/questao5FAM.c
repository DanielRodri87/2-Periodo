// Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
// do teclado e imprima o enderec¸o das posic¸oes contendo valores pares. 

#include <stdio.h>

void vetor_pares(int *vet)
{
    printf("Elementos pares: ");
    for (int i = 0; i < 5; i++)
    {
        if(vet[i] % 2 == 0)
        {
            printf("%d ", vet[i]);
        }
    } 
}

int main()
{
    int vetor[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Informe o %d° valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    vetor_pares(&vetor);
    return 0;
}