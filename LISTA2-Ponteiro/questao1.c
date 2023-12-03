#include <stdio.h>

// Desenvolva um programa em C que solicite ao usuário o tamanho de um vetor e permita a inserção
// de valores inteiros. Em seguida, crie uma função que ordene esse vetor em ordem crescente e
// decrescente utilizando ponteiros para percorrer e manipular os elementos



int main()
{
    int tam, i;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    
    for (i = 0; i < tam; i++)
    {
        printf("Informe o %d° valor do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }



    return 0;
}