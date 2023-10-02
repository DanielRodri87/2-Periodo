
// ---------> Variáveis
// char: caractere
// int: inteiro
// float: quebrado
// double: quebrado com mais precisão
// void: não tem tipo definido
// unsigned char: pode ser usado para usar "J23"

#include <stdio.h>
#define MAX 6
float x = 10.5, menos; // Global
int y;

int main()
{
    y = x;
    menos = x-y;

    printf("Hello World %f ", menos);
    printf("Hello World %d", y);

    return 0;
}

//  ---------> Constantes
// Atributo fixo ou estável
// define MAX 100;