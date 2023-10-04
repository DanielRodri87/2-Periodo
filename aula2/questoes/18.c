#include <stdio.h>

int main()
{
    float r, a, v;
    scanf("%f %f", &r, &a);
    v = 3.141592*r*r*a;
    printf("%.2f", v);
    return 0;
}