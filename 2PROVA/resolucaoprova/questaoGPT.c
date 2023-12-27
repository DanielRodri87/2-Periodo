#include <stdio.h>
#include <stdlib.h>

void trocarNumeros(int *num1, int *num2);

int main()
{
    int valorA = 10, valorB = 20;

    printf("Antes da Troca:\n Valor A = %d, Valor B = %d\n", valorA, valorB);

    trocarNumeros(&valorA, &valorB);

    printf("Depois da Troca:\n Valor A = %d, Valor B = %d\n", valorA, valorB);

    return 0;
}

void trocarNumeros(int *num1, int *num2)
{
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;

}

