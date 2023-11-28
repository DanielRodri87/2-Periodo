#include <stdio.h>

int main()
{
    static int mat[] = {4, 5, 6};
    int j, *p = mat;
    for (j=0;j<3;j++)
    {
        printf("%d\n", *(mat+j));
    }

    return 0;
}