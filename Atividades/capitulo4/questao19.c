#include <stdio.h>

int main()
{
    int a, b,c, i, soma = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 1)
    {
        for (i = b; i <= c; i++)
        {
            if (i % a == 0)
            {
                soma += i;
            }
        }
    } else
    {
        printf("O número deve ser maior do que 1");
    }

    printf("A soma dos números eh: %d", soma);

    return 0;
}