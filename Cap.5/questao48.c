	#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + soma(n - 1);
    }
}

int main() {
    int n, resultado;

    printf("Digite um número inteiro positivo n: ");
    scanf("%d", &n);

    resultado = soma(n);
    printf("A soma dos primeiros %d números inteiros é igual a %d\n", n, resultado);

    return 0;
}
