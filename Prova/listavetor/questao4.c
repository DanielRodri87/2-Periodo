#include <stdio.h>

int main()
{
    int x[5], y[5], somax_y[5], xey[5], cont = 0, i, j;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor de x[%d] e y[%d] (Separados por espaço: x y): ", i+1, i+1);
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        somax_y[i] = x[i] + y[i];
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <5; j++)
        {
            if (x[i] == y[j])
            {
                xey[cont] = x[i];
                cont++;
            }
        }

    }

    printf("Intersecção dos vetores: ");
    for (int i = 0; i < cont; i++)
    {
        printf("%d ", xey[i]);
    }
    printf("\n");
    printf("Soma dos indices: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", somax_y[i]);
    }

    return 0;
}