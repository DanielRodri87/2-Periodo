#include <stdio.h>

// 4.	Escreva um programa em C que inverta a ordem dos elementos de um array utilizando ponteiros.
int tam, i, saida;

void inverter(int *vet, int tam)
{
    int maior = *vet;  
    for (int i = 1, j = tam; i < tam; i++, j--)
    {   

        
    }
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

    

    return 0;
}