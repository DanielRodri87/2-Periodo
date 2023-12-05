#include <stdio.h>

void adicionar_elemento(int matriz[][100], int *maxL, int *maxC)
{
    if (*maxL < 100 && *maxC < 100) 
    {
        int novoElemento;
        printf("Digite o novo elemento: ");
        scanf("%d", &novoElemento);

        matriz[*maxL][*maxC] = novoElemento;

        (*maxC)++;

        if (*maxC == 100)
        {
            (*maxL)++;
            *maxC = 0;
        }

        printf("Elemento adicionado com sucesso!\n");
    }
    else
    {
        printf("A matriz atingiu o tamanho máximo.\n");
    }
}

void remover_elemento(int matriz[][100], int *maxL, int *maxC)
{
    if (*maxL > 0 && *maxC > 0)
    {
        (*maxC)--;

        if (*maxC == 0)
        {
            (*maxL)--;
            *maxC = 100;
        }

        printf("Elemento removido com sucesso!\n");
    }
    else
    {
        printf("A matriz atingiu o tamanho mínimo.\n");
    }
}

void pesquisar_elemento(int matriz[][100], int *maxL, int *maxC)
{
    int elemento, l, c;
    printf("Digite o elemento a ser pesquisado: ");
    scanf("%d", &elemento);

    for (l = 0; l < *maxL; l++)
    {
        for (c = 0; c < *maxC; c++)
        {
            if (matriz[l][c] == elemento)
            {
                printf("Elemento encontrado na %dª linha e %dª coluna.\n", l + 1, c + 1);
                return;
            }
        }
    }

    printf("Elemento não encontrado.\n");
}


int main()
{
    int maxL = 0, maxC = 0, menu, l, c;
    printf("Informe o tamanho de linhas e colunas da matriz: ");
    scanf("%d %d", &maxL, &maxC);

    int matriz[100][100];

    for (l = 0; l < maxL; l++)
    {
        for (c = 0; c < maxC; c++)
        {
            printf("Digite o valor da %dª linha e %dª coluna: ", l + 1, c + 1);
            scanf("%d", &matriz[l][c]);
        }
    }

    printf("MENU:\n1 - Adicionar elemento\n2 - Remover Elemento\n3 - Buscar Elemento: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        adicionar_elemento(matriz, &maxL, &maxC);
        printf("Lista após alteração: ");
        for (l = 0; l < maxL; l++)
        {
            for (c = 0; c < maxC; c++)
            {
                printf("%d ", &matriz[l][c]);
            }
        }

        break;

    case 2:
        remover_elemento(matriz, &maxL, &maxC);
        break;


    case 3:
        pesquisar_elemento(matriz, &maxL, &maxC);
        break;

    default:
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}
