#include <stdio.h>
#define tam 5
int main()
{
    int mat[tam];
    for (int i = 0; i <= tam; i++)
    scanf("%d", &mat[i]);

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", mat[i]);
    }
    return 0;
}