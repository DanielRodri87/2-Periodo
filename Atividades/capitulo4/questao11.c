#include <stdio.h>
#include <stdlib.h>
int main()
{
    int lin, col;
    system("cls");
    for (lin=1; lin <= 60;lin++)
    {
        for (col = 1; col <= 60; col++)
        {
            if ((lin+col)%2 == 0)
                {
                    printf("\xdb\xdb");
                } else{
                    printf("  ");
                }
        }
        printf("\n");

    }
    system("pause");
    return 0;

}