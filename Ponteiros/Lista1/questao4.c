#include <stdio.h>

void inverter(int *vet, int tam)
{
    int *inicio = vet;         
    int *fim = vet + tam - 1;  

    while (inicio < fim)
    {
        // Depois peça ao GPT para explicar essa coisa, ficou muito dificil
        int temp = *inicio; 
        *inicio = *fim;
        *fim = temp;   

        inicio++;
        fim--;
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
        printf("%d ", vetor[i]);
    }

    return 0;
}
