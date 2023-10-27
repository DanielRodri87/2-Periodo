#include <stdio.h>

int main()
{
    int x[5], y[5], somax_y[5], xey[10];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor de x[%d] e y[%d] (Separados por espaço: x y): ", i+1, i+1);
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        somax_y[i] = x[i] + y[i];
    }
    for (int i = 0 ; i < 5; i++)
    {
        xey[i] = x[i];
        xey[i+5] = y[i];

    }

    printf("Intersecção dos vetores: ");
    for (int i = 0; i < 10; i++)
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