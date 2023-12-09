#include <stdio.h>
#include <stdlib.h>

int verificaDiagonalDominante(int matriz[100][100], int n) {
    for (int i = 0; i < n; i++) {
        int somaLinha = 0;
        int elementoDiagonal = matriz[i][i];

        for (int j = 0; j < n; j++) {
            if (i != j) {
                somaLinha += abs(matriz[i][j]); 
            }
        }

        if (abs(elementoDiagonal) <= somaLinha) { // abs() retorna o valor absoluto de um número
            return 0;  
        }
    }

    return 1; 
}

int main() {
    int n;

    printf("Digite a ordem da matriz quadrada: ");
    scanf("%d", &n);

    int matriz[n][n];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    if (verificaDiagonalDominante(matriz, n)) {
        printf("A matriz é diagonalmente dominante.\n");
    } else {
        printf("A matriz não é diagonalmente dominante.\n");
    }

    return 0;
}
