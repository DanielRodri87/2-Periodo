#include <stdio.h>

void calc_media(int *vet, float *media)
{
    int soma = 0;
    for (int i = 0; i < 3; i++)
    {
        soma+= vet[i];
    }

    *media = soma/3;
}


int main()
{
    int vet[3];
    float media;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %d elemento: ", i+1);
        scanf("%d", &vet[i]);
    }
    calc_media(vet, &media);
    printf("A média do vetor é: %.2f", media);

}