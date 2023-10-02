#include <stdio.h>

float a, b, c, media;
#define max 3;
int main()
{
    scanf("%f %f %f", &a, &b, &c);
    media = (a+b+c)/3;

    printf("A media eh: %.2f", media);
    return 0;
}