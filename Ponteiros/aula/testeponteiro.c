#include <stdio.h>


void ponteiro(int *vet)
{
    printf("O vetor vale: %d", *vet);
}

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    ponteiro(vetor);
    return 0;
}


