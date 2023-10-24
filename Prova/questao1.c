#include <stdio.h>

int main()
{
    int n1, n2, op;
    printf("Digite o Primeiro Numero e o Segundo numero respectivamente: ");
    scanf("%d %d", &n1, &n2);
    printf("Digite\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf("%d", &op);
    switch (op)
    {
        case 1:
            printf("Soma: %d\n", n1 + n2);
            break;
        case 2: 
            printf("Subtracao: %d\n", n1 - n2);
            break;
        case 3:
            printf("Multiplicacao: %d\n", n1 * n2);
            break;
        case 4:
            printf("Divisao: %d\n", n1 / n2);
            break;
        default:
            printf("Opcao Invalida\n");
            break;
    }
    return 0;
}