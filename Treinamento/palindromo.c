#include <stdio.h>
#include <string.h>

int main()
{
    char text[10], newtext[10];
    int i, j;

    scanf("%s", text);

    for (i = strlen(text) - 1, j = 0; i >= 0; i--, j++)
    {
        newtext[j] = text[i];
    }

    if (strcmp(text, newtext) == 0)
    {
        printf("Palindromo");
    } else
    {
        printf("Não é palindromo");
    }


    return 0;
}