#include <stdio.h>
#define tam 3
int main()
{
    int i;
    float notas[tam], soma, media;
    for (i =0; i < tam; i++)
    {
        printf("Digite o valor para notas[%d] ", i+1);
        scanf("%f", &notas[i]);
        soma = soma+notas[i];
        media = soma/tam;

    }
    for (i =0; i < tam; i++)
    {
        printf("A nota %d eh: %.2f\n", i+1, notas[i]);

    }
    printf("Media: %.2f", media);
    return 0;
}