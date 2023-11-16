// Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
// 2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
// variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
// tera o valor de A. 
#include <stdio.h>
int a, b;

void trocar(int *a, int *b)
{
    int aux = *b;
    *b = *a;
    *a = aux;
}

int main()
{
    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    trocar(&a, &b);


    printf("O valor de A: %d\n", a);
    printf("O valor de B: %d\n", b);

    return 0;
}