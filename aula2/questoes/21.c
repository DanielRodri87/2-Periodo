#include <stdio.h>
int main()
{
    float j1, j2, j3, g1, g2, g3;
    printf("Valor do Pessoa 1 e Pessoa 2 e Pessoa 3: ");
    scanf("%f %f %f", &j1, &j2, &j3);

    g1 = (j1 / (j1 + j2 + j3)) * 780000;
    g2 = (j2 / (j1 + j2 + j3)) * 780000;
    g3 = (j3 / (j1 + j2 + j3)) * 780000;

    printf("O Pessoa 1 receberá: %.2f\nO Pessoa 2 receberá: %.2f\nO Pessoa 3 receberá: %.2f", g1, g2, g3);

    return 0;
}