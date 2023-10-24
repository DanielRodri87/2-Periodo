#include <stdio.h>
#include <string.h>

struct Restaurante {
    char nome[100];
    char endereco[100];
    float precoMedio;
    char tipoComida[50];
};

void preencher(struct Restaurante *restaurante) {
    printf("Digite o nome do restaurante: ");
    scanf("%s", restaurante->nome);
    printf("Digite o endereço do restaurante: ");
    scanf("%s", restaurante->endereco);
    printf("Digite o preço médio do restaurante: ");
    scanf("%f", &restaurante->precoMedio);
    printf("Digite o tipo de comida do restaurante: ");
    scanf("%s", restaurante->tipoComida);
}

void listar(struct Restaurante restaurante) {
    printf("Nome: %s\n", restaurante.nome);
    printf("Endereço: %s\n", restaurante.endereco);
    printf("Preço Médio: R$%.2f\n", restaurante.precoMedio);
    printf("Tipo de Comida: %s\n", restaurante.tipoComida);
    printf("\n");
}

int main() {
    int qtd;

    printf("Quantos restaurantes deseja cadastrar? ");
    scanf("%d", &qtd);

    struct Restaurante restaurantes[qtd];

    for (int i = 0; i < qtd; i++) {
        printf("Digite os dados do restaurante %d:\n", i + 1);
        preencher(&restaurantes[i]);
    }

    printf("\nDados dos restaurantes cadastrados:\n");

    for (int i = 0; i < qtd; i++) {
        printf("Restaurante %d:\n", i + 1);
        listar(restaurantes[i]);
    }

    return 0;
}
