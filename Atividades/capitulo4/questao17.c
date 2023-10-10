#include <stdio.h>
#include <stdlib.h>
int main()
{
    int lin, col;
    system("cls");
    for (lin = 1; lin < 25; lin++)
    {
        for (col = 1; col < 25; col++)
        {
            if (lin == col)
            {
                printf("\xDB");
            }
            else
            {
                if (col == 25 - lin)
                {
                    printf("\xDB");
                } else if (col == 12 || col == 13)
                {
                    printf("\xDB");
                } else if (lin == 12 || lin == 13) {
                    printf("\xDB");
                }
                else
                {
                    printf("\xB0");
                }
            }
        }
        printf("\n");
    }
    system("PAUSE");
    return 0;
}
