#include <stdio.h>
#include <string.h>

int main()
{
    char text[10], newtext[10];
    int i, j = 0;
    char vetor[50];
    scanf("%s", text);

    for (i = strlen(text) - 1; i >= 0; i--)
    {
        newtext[j] = text[i];
        j++;
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