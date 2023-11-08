#include <stdio.h>


int calc(int n1, int n2, int op)
{
    int r;

    if (op == 1)
    {
        r = n1+n2;
    } else if (op == 2)
    {
        r = n1-n2;
    } else if (op == 3)
    {
        r = n1*n2;
    }  else if (op == 4)
    {
        r = n1/n2;
    } 
    return r;
}

int main()
{
    int num1, num2, opcao;
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite a operação: 1- Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão: ");
    scanf("%d", &opcao);

    int resultado = calc(num1, num2, opcao);
    printf("O resultado da operação é: %d", resultado);
    return 0;
}