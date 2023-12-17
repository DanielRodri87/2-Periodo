#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverterPalavra(char *str1);

int main()
{
    char palavra[100];
    printf("Informe uma palavra para ser invertida: ");
    gets(palavra);

    inverterPalavra(palavra);
    printf("Palavra invertida é: %s", palavra);

    return 0;
}

void inverterPalavra(char *str1)
{
    int i, j;
    for(i = 0, j = strlen(str1) -1 ; i < j; i++, j--)
    {
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }
}