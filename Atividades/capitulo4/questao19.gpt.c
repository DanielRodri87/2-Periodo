#include <stdio.h>

int main() {
    int a, b, c;
    int soma = 0;

    // Solicita ao usuário os valores de a, b e c
    printf("Digite o valor de a (maior que 1): ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    // Verifica se a é maior que 1
    if (a <= 1) {
        printf("O valor de 'a' deve ser maior do que 1.\n");
    } else {
        // Loop para iterar através dos números entre b e c
        for (int i = b; i <= c; i++) {
            // Verifica se o número é divisível por a
            if (i % a == 0) {
                soma += i;
            }
        }

        // Exibe o resultado da soma
        printf("A soma dos números entre %d e %d que são divisíveis por %d é: %d\n", b, c, a, soma);
    }

    return 0;
}
