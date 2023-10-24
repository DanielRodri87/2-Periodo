#include <stdio.h>
#include <string.h>

struct Dieta {
    char nome[100];
    float peso;
    int calorias;
};

void preencher(struct Dieta *alimento) {
    printf("Digite o nome do alimento: ");
    scanf("%s", alimento->nome);
    printf("Digite o peso de uma porção (em gramas): ");
    scanf("%f", &alimento->peso);
    printf("Digite o número de calorias por porção: ");
    scanf("%d", &alimento->calorias);
}

void listar(struct Dieta alimento) {
    printf("Nome do alimento: %s\n", alimento.nome);
    printf("Peso de uma porção: %.2f gramas\n", alimento.peso);
    printf("Número de calorias por porção: %d calorias\n", alimento.calorias);
    printf("\n");
}

int main() {
    int num;

    printf("Quantos alimentos deseja cadastrar na dieta? ");
    scanf("%d", &num);
    struct Dieta alimentos[num];

    for (int i = 0; i < num; i++) {
        printf("Digite os dados do alimento %d:\n", i + 1);
        preencher(&alimentos[i]);
    }

    printf("\nDados dos alimentos cadastrados na dieta:\n");

    for (int i = 0; i < num; i++) {
        printf("Alimento %d:\n", i + 1);
        listar(alimentos[i]);
    }
    return 0;
}
