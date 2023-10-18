#include <stdio.h>

struct Mes
{
    char abrevicao[3];
    int dias;
    char nome[20];
    int numero;
};

int main()
{
    struct Mes meses[12];
    int i;
    for (i = 0; i < 12; i++)
    {
        scanf("%s", meses[i].abrevicao);
        scanf("%d", &meses[i].dias);
        scanf("%s", meses[i].nome);
        scanf("%d", &meses[i].numero);
    }

    for (i = 0; i < 12; i++)
    {
        printf("%s %d %s %d\n", meses[i].abrevicao, meses[i].dias, meses[i].nome, meses[i].numero);
    }
    return 0;
}