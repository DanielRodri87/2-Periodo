#include <stdio.h>

int main()
{
    int dias;
    float salario;
    scanf("%d", &dias);
    salario = dias * 20;
    salario = (salario * 92) /100;
    printf("%.2f", salario);
    return 0;
}