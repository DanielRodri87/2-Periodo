#include <stdio.h>

int potencia(int i, int j) {
    if (j == 0) {
        return 1;
    } else {
        return i * potencia(i, j - 1);
    }
}

int main() {
    int base, expoente, resultado;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);
    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

    return 0;
}
