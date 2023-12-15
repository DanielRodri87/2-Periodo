#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções
void leituradovetor(int** vetor, int n);
void gerarMatriz(int*** matriz, int n);
void preencherMatriz(int** matriz, int* vetor, int n);
void exibirMatriz(int** matriz, int n);
void retornarmemoria(int** vetor, int*** matriz, int n);

int main() {
    int n;

    printf("Digite o número de elementos no vetor: ");
    scanf("%d", &n);

    int* vetor;
    leituradovetor(&vetor, n);

    int** matriz;
    gerarMatriz(&matriz, n);

    preencherMatriz(matriz, vetor, n);

    exibirMatriz(matriz, n);

    retornarmemoria(&vetor, &matriz, n);

    return 0;
}

void leituradovetor(int** vetor, int n) {
    vetor = (int)malloc(n * sizeof(int));

    if (*vetor == NULL) {
        printf("Erro na alocação\n");
        exit(1);
    }

    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &(*vetor)[i]);
    }
}

void gerarMatriz(int*** matriz, int n) {
    matriz = (int)calloc(n, sizeof(int));

    if (*matriz == NULL) {
        printf("Erro na alocação\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        (matriz)[i] = (int)calloc(n, sizeof(int));
    }
}

void preencherMatriz(int** matriz, int* vetor, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = vetor[i];
        }
    }
}

void exibirMatriz(int** matriz, int n) {
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void retornarmemoria(int** vetor, int*** matriz, int n) {
    free(*vetor);
    for (int i = 0; i < n; i++) {
        free((*matriz)[i]);
    }
    free(*matriz);
}