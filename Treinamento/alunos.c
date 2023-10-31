#include <stdio.h>

int main()
{
    int num[10], i;
    float tam[10];

    for (i = 0; i < 10; i++)
    {
        printf("Digite número do aluno e sua altura: ");
        scanf("%d %f", &num[i], &tam[i]);
    }

    int alto = num[0], baixo = num[0];
    float alt_grande = tam[0], alt_baixo = tam[0];

    for (i = 0; i < 10; i++)
    {
        if (tam[i] > alt_grande)
        {
            alt_grande = tam[i];
            alto = num[i];
        } else if (tam[i] < alt_baixo)
        {
            alt_baixo = tam[i];
            baixo = num[i];
        }
    }

    printf("Aluno n %d é o mais alto com %.2f m\n", alto, alt_grande);
    printf("Aluno n %d é o mais baixo com %.2f m", baixo, alt_baixo);

    return 0;
}