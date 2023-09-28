#include <stdio.h>
int main()
{
    int a = 20, b = 10;
    int *pa = &a;
    int *pb = &b;

    printf("a = %d, b = %d\n", *pa, *pb);
    return 0;
}