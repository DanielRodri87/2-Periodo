#include <stdio.h>
int main()
{
    float kg, c, z;
    printf("Quantos quilos de latão quer produzir? ");
    scanf("%f", &kg);
   
    c = (kg * 70) / 100;
    z = (kg * 30) / 100;

    printf("Serão usados %.2f quilos de cobre\nSerão usados %.2f quilos de cobre\n", c, z);

    return 0;
}