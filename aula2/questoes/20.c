#include <stdio.h>
int main()
{
    float j1, j2, premio, g1, g2;
    printf("Valor do Jogador 1 e Jogador 2: ");
    scanf("%f %f", &j1, &j2);
    printf("Valor do prêmio: ");
    scanf("%f", &premio);

    g1 = (j1 / (j1 + j2)) * premio;
    g2 = (j2 / (j1 + j2)) * premio;

    printf("O jogador 1 receberá: %.2f\nO jogador 2 receberá: %.2f", g1, g2);

    return 0;
}