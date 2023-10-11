#include <stdio.h>

int main()
{

    int mat[2][2], l, c, x1 = 1, x2 = 1;
    for (l = 0; l < 2; l++)
    {
        for (c = 0; c < 2; c++)
        {
           scanf("%d", &mat[l][c]);
        }
    }

    for (l = 0; l < 2; l++)
    {
        for (c = 0; c < 2; c++)
        {
            if (l == c)
            {
                x1 *= mat[l][c];
            } else {
                x2 *= mat[l][c];
            }
            
        }
    }
    printf("O determinante eh: %d\n", x1-x2);
    return 0;
}