// Escreva um programa que solicite ao usuário três números inteiro a, b e c, em que a seja maior do que 1.
// Seu programa deve somar todos os inteiro entre b e c que sejam divisiveis por a.

// a > 1;
// soma = b [...] c
// 2 4 e 10
// a > 1 = True
// 4+5+6+7+8+9+10 = ?

#include <stdio.h>

int main()
{
    int n = 0;

    while (1)
    {
        if ((n % 3) == 2 && (n % 5) == 3 && (n % 7) == 4)
        {
            printf("O numero eh %d\n", n);
            break;
        }
        n++;
    }
    return 0;
}