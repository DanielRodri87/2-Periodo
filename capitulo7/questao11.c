#include <stdio.h>

int main()
{
    int mat[8];
    mat[9] = 10;

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", mat[i]);
    }

    return 0;
}