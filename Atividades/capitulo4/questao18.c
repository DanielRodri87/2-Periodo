#include <stdio.h>

int main()
{
    int n = 0;
    int x = 0;
    int y = 0;
    int z = 0;

    while (x != 2 || y != 3 || z != 4)
    {
        n++;
        x = n % 3;
        y = n % 5;
        z = n % 7;
    }

    printf("O menor inteiro positivo eh %d\n", n);

    return 0;
}