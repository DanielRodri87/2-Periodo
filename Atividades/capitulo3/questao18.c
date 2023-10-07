#include <stdio.h>
int main() {
    int num, casos = 0, total = 0;
    printf("Digite um numero entre 3 e 18: ");
    scanf("%d", &num);
    if (num >= 3 && num <= 18) {
        for (int dado1 = 1; dado1 <= 6; dado1++) {
            for (int dado2 = 1; dado2 <= 6; dado2++) {
                for (int dado3 = 1; dado3 <= 6; dado3++) {
                    int soma = dado1 + dado2 + dado3;
                    total++;
                    if (soma == num) {
                        casos++;
                    }
                }
            }
        }
        double probabilidade = (casos * 100.0) / total;
        printf("A probabilidade de sair %d eh: %.2lf%%.\n", num, probabilidade);
    } else {
    printf("Digite um número no intervalo de 3 à 18.\n");
    }
    return 0;
}