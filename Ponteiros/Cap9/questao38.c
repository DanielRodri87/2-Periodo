#include <stdio.h>
#include <stdlib.h>

struct Produto {
  char nome[50];
  float preco;
};

int cmp_nome(const void *p1, const void *p2) {
  struct Produto *produto1 = (struct Produto *)p1;
  struct Produto *produto2 = (struct Produto *)p2;

  return strcmp(produto1->nome, produto2->nome);
}



int cmp_preco(const void *p1, const void *p2) {
  struct Produto *produto1 = (struct Produto *)p1;
  struct Produto *produto2 = (struct Produto *)p2;

  if (produto1->preco == produto2->preco) {
    return 0;
  } else if (produto1->preco < produto2->preco) {
    return -1;
  } else {
    return 1;
  }
}

int main() {
  struct Produto produtos[10];

  for (int i = 0; i < 10; i++) {
    printf("Nome do produto %d: ", i + 1);
    scanf("%s", produtos[i].nome);
    printf("Preço do produto %d: ", i + 1);
    scanf("%f", &produtos[i].preco);
  }

  qsort(produtos, 10, sizeof(struct Produto), cmp_nome);

  for (int i = 0; i < 10; i++) {
    printf("Nome: %s\nPreço: %.2f\n", produtos[i].nome, produtos[i].preco);
  }

  qsort(produtos, 10, sizeof(struct Produto), cmp_preco);

  for (int i = 0; i < 10; i++) {
    printf("Nome: %s\nPreço: %.2f\n", produtos[i].nome, produtos[i].preco);
  }

  return 0;
}
