#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        char: 1 byte
        int: 4 bytes
        float: 4 bytes
        double: 8 bytes
    
    */

    /*
        O operador sizeof() retorna o número de bytes necessários para alocar um único
        elemento de um determinado tipo de dado.
    
    */

    int x = sizeof(int);
    printf("O tamanho de um inteiro é %d bytes\n", x);
    return 0;
}