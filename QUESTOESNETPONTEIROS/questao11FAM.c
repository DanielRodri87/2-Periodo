// Escreva uma func¸ao que aceita como par ˜ ametro um array de inteiros com N valores, e ˆ
// determina o maior elemento do array e o numero de vezes que este elemento ocorreu ´
// no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
// 8, 6, 15, a func¸ao deve retorna para o programa que a chamou o valor 15 e o n ˜ umero 3 ´
// (indicando que o numero 15 ocorreu 3 vezes). A func¸ ´ ao deve ser do tipo ˜ void.


#include <stdio.h>

void maior_elemento(int *vetor, int *tam)
{
    int i, maior = 0, cont = 0;
    for (i = 0; i < *tam; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            cont = 1;
        }
        else if (vetor[i] == maior)
        {
            cont++;
        }
    }
    printf("O maior elemento do vetor é: %d\n", maior);
    printf("O maior elemento do vetor aparece %d vezes\n", cont);
}


int main()
{
    int size, i;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &size);

    int vetor[size];
    for (i = 0; i < size; i++)
    {
        printf("Digite o valor do %d° Elemento: ", i+1);
        scanf("%d", &vetor[i]);
    }
    maior_elemento(vetor, &size);

    return 0;
}