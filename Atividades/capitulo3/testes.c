#include <stdio.h>
int main() {
    int n, r;
    int combinacoes = 1;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de r: ");
    scanf("%d", &r);
    if (n >= 0 && r >= 0 && r <= n) {
    // Calcula nCr diretamente usando uma abordagem iterativa
        for (int i = 1; i <= r; i++) {
            combinacoes *= n - i + 1;
            combinacoes /= i;
        }
        printf("O valor de %dC%d eh %d\n", n, r, combinacoes);
    } else {
        printf("Erro: n e r devem ser maiores ou iguais a zero e r deve ser menor ou igual a n\n");
    }
    return 0;
}

