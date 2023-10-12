#include <stdio.h>

int main()
{
    int matriz[3][3] = {    {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}       };
    int l, c;
    for (l=0; l < 3; l++)
    {
        for (c=0; c < 3; c++)
        {
            printf("Vetor[%d][%d] = %d\n", l, c, matriz[l][c]);  
        } 
    }
    return 0;
}
