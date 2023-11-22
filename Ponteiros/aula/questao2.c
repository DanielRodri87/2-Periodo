// Escreva uma função que dado um número real passado como parâmetro
//  retorne a parte inteira e a parte fracionária deste número. Escreva
// um programa que chama esta função.


#include <stdio.h>

void frac(float num, int *inteiro, float *fracionario)
{
    *inteiro = (int)num;
    *fracionario = num - *inteiro;
}


int main()
{
    float numero, val_fracionaro;
    int val_inteiro;

    printf("Digite um número float: ");
    scanf("%f", &numero);

    frac(numero, &val_inteiro, &val_fracionaro);

    printf("O valor completo é: %.2f\n", numero);
    printf("O valor inteiro é: %d\n", val_inteiro);
    printf("O valor fracionário é: %.2f\n", val_fracionaro);
    return 0;
}
