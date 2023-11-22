#include <stdio.h>

int main()
{
    float ent;
    scanf("%f", &ent);
    int inteiro = (int)ent;
    float resto = ent - inteiro;
    printf("%d + %.1f", inteiro, resto);
    return 0;
}
