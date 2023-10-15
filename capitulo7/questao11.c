#include <stdio.h>

int main()
{
    int mat[4] = {1, 2, 3, 4};
    mat[7] = 10;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", mat[i]);
    }
    return 0;
}