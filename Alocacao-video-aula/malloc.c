// Função malloc():
// serve para alocar memória durante a execução do programa
// Ela faz o pedido de memória ao computador e retorna 
// um ponteiro com o endereço do inicio do espaço de memória alocado

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // void* malloc(unsigned int num);

    // crio um array de 50 inteiros, 50*4 = 200 bytes
    int *v = malloc(200);

    // Como tenho que armazenar os bytes, solução:
    int *v = malloc(50 * sizeof(int));

    return 0;
}