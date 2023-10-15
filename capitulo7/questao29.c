#include <stdio.h>
#include <string.h>

void minuscula(char *str)
{
    int i = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}

int main()
{
    char palavra[100];
    scanf("%s", palavra);
    printf("Antes: %s\n", palavra);
    minuscula(palavra);
    printf("Depois: %s\n", palavra);
    return 0;
}