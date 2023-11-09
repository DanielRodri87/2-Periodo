#include <stdio.h>

void preencher(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("Digite o valor do elemento:");
        scanf("%d", &v[i]);
    }
}

void buscasequencial(int v[], int tam, int valor)
{
    int i, encontrou;
    for (i=0; i < tam; i++)
    {
        if (v[i] == valor)
        {
            encontrou = i;
        } else
        {
            
        }
    }
}