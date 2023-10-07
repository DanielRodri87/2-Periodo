#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int saida = 26;
    char c;
    while (saida!=27)
    {
        scanf("%c", &c);
        saida++;
    }
    // pegar o valor na tabela ASCII
    printf("Saida: %c\n", (char)c);
    return 0;
}