#include <stdio.h>
#define t 4
int main()
{
    float notas[t], media, soma = 0;
    for (int i = 0; i < t; i++)
    {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media  = soma / t;
    printf("Media: %.2f\n", media);
    return 0;
}