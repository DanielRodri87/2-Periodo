#include <stdio.h>


void inverter(int *vet, int tam)
{
    int i, j;
    int novovetor[tam];
    for ( i = 0; i < tam; i++)
    {
        for ( j = tam-1; j > 0; j++)
        {
        novovetor[i] = vet[j];
        }
        
    }
    
}


int main()
{
    int tam;


    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);


    int vetor[tam];


    for (int i = 0; i < tam; i++)
    {
        printf("Digite o valor do %d° elemento do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    inverter(vetor, tam);


    printf("Vetor invertido: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d\n", vetor[i]);
    }


   


    return 0;
}