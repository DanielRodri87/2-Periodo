#include <stdio.h>
#include <stdlib.h>
// Saida 1: 0123456789123456789102345678910113456789101112456789101112135678910111213146789101112131415789101112131415168910111213141516179101112131415161718
int main()
{
    int a;
    for (a=36; a>0;a/=2)
    {
        printf("%d\t", a);
    }
    printf("\n");
    system("pause");
    return 0;
}