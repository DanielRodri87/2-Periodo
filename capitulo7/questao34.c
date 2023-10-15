#include <stdio.h>
#include <string.h>

void inverter(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    char aux;
    while (i < j)
    {
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
        i++;
        j--;
    }
}

int main()
{
    char palavra[100];
    scanf("%s", palavra);
    printf("Antes: %s\n", palavra);
    inverter(palavra);
    printf("Depois: %s\n", palavra);
    return 0;
}
