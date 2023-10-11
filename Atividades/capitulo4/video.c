#include <stdio.h>

int main() {
    int a, b, c;
    int soma = 0;

    printf("Digite um valor para 'a' (deve ser maior que 1): ");
    scanf("%d", &a);
    if (a <= 1) {
        printf("O valor de 'a' deve ser maior que 1. Encerrando o programa.\n");
        return 1; 
    }

    printf("Digite um valor para 'b': ");
    scanf("%d", &b);

    printf("Digite um valor para 'c': ");
    scanf("%d", &c);

    for (int i = b; i <= c; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }

    printf("A soma dos números entre %d e %d divisíveis por %d é: %d\n", b, c, a, soma);

    return 0;
}