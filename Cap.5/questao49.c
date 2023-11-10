#include <stdio.h>

int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int termo, resultado;

    printf("Digite o número do termo na sequência de Fibonacci: ");
    scanf("%d", &termo);

    resultado = fibonacci(termo);
    printf("O %dº termo na sequência de Fibonacci é igual a %d\n", termo, resultado);

    return 0;
}
