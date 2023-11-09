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
            break;
        } else
        {
            encontrou = -1;
        }
    }
    if (encontrou >= 0)
    {
        printf("Valor encontrado na posição: %d", encontrou);
    } else
    {
        printf("Valor não encontrado");
    }
}

int main()
{
    int val;
    while (1)
    {

        int t;
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &t);
        int vetor[t];
        preencher(vetor, t);
        printf("Digite o valor que você deseja buscar: ");
        scanf("%d", &val);
        buscasequencial(vetor, t, val);
        break;
    
    
    return 0;
        
    }
    
}