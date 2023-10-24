#include <stdio.h>

struct livro {
    char titulo;
    char autor;
    int numero_registro;

    union {
        float preco;
        struct {
            int reais;
            int centavos;
        };
    };
};