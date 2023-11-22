#include <stdio.h>

void reajustar(float *preco, float *reajuste)
{
    *reajuste = *preco * 1.2;
    *preco = *preco + (*reajuste);

}

int main()
{
    float val_preco, val_reajuste;

    printf("Digite o valor atual: ");
    scanf("%f", &val_preco);
    reajustar(&val_preco, &val_reajuste);

    printf("O novo preço é: %.2f\n", val_preco);
    printf("O Aumento é: %.2f", val_reajuste);



    return 0;
}