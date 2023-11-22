#include <stdio.h>
#include <string.h>

char palavra[50], nova_palavra[50], boolean = 0;

void palindromo(char *palavra)
{
    int j, i;
    for (j = 0, i = strlen(palavra)-1; i >= 0; i--, j++)
    {
        nova_palavra[j] = palavra[i];
    }

    if (strcmp(palavra, nova_palavra) == 0)
    {
        boolean = 1;
    }
}

int main()

{
    printf("Digite uma palavra para verficar se é palindromo: ");
    scanf("%s", palavra);
    palindromo(palavra);

    if (boolean != 0)
    {
        printf("A palavra é um palindromo!");
    } else
    {
        printf("A palavra não é um palindromo");
    }
    
    return 0;
}