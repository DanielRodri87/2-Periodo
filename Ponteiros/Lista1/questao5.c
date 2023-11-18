#include <stdio.h>
#include <string.h>

void char_repete(char *l, char *pal)
{
    int i, count = 0;
    for (i = 0; i < strlen(pal); i++)
    {
        if (pal[i] == l)
        {
            count++;
        }
    }

    printf("A letra %c se repete: %d", l, count);
}


int main()
{
    char letra, palavra[50];

    printf("Informe uma letra: ");
    scanf("%c", &letra);
    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    char_repete(letra, palavra);

    return 0;
}