#include <stdio.h>

int main()
{
    int caso = 0;
    float salario, salario_liquido;
    char cargo[70];
    scanf("%f", &salario);
    scanf("%s", cargo);

    if (salario <= 1317.07)
    {
        caso = 1;
    } else if (salario >= 1317.08 && salario <= 2195.12)
    {
        caso = 2;
    } else if (salario >= 2195.13 && salario <= 4390.24)
    {
        caso = 3;
    } else if (salario >= 4390.24)
    {
        caso = 4;
    }

    switch (caso)
    {
        case 1:
            salario_liquido = salario * 0.92;
            break;
        case 2:
            salario_liquido = salario * 0.91;
            break;
        case 3:
            salario_liquido = salario * 0.89;
            break;
        case 4:
            salario_liquido = salario * 0.89;
            break;
    }

    printf("Salário liquido: %.2f", salario_liquido);

    return 0;
}