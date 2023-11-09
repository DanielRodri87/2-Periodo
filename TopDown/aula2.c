#include <stdio.h>

void preencher(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("Digite o valor do elemento: ");
        scanf("%d", &v[i]);
    }
}

int buscasequencial(int v[], int tam, int valor)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (v[i] == valor)
        {
            return i; 
        }
    }

    return -1; 
}

int ordenar_crescente(int v[], int tam)
{
    int i, j, aux;
    for (i = 0; i < tam; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main()
{
    int val;

    int t;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);

    int vetor[t];
    preencher(vetor, t);

    printf("Digite o valor que você deseja buscar: ");
    scanf("%d", &val);

    int resultado = buscasequencial(vetor, t, val);

    if (resultado != -1)
    {
        printf("Encontrou na posição: %d\n", resultado);
    }
    else
    {
        printf("Valor não encontrado\n");
    }

    ordenar_crescente(vetor, t);
    for (int i = 0; i < t; i++)
    {
        printf("%d ", vetor[i]);
    }


    return 0;
}
