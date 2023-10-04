#include <stdio.h>

int main()
{
    int ano;
    scanf("%d", &ano);
    if (ano % 4 == 0)
    {
        if (ano % 100 != 0)
        {
            printf("Ano Bissexto");
        } else
        {
            printf("Ano Não-Bissexto");
        }
    } else 
    {
            printf("Ano Não-Bissexto");
    }
    return 0;
}