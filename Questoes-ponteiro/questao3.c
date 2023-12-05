// Faça um programa para calcular a área e o perímetro de um hexágono.
// O programa deve implementar uma função chamada calc_hexa que calcula a área e o perímetro de um hexágono
// regular de lado L. O program deve solicitar ao usuário o lado do polígono, calcular e imprimir a área e o
// perímetro do polígono. O programa termina quando for digitado um valor negativo qualquer para o lado.
// A função deve obedecer o seguinte protótipo:

#include<stdio.h>
#include<math.h>

void calc_hexa(float l, float *area, float *per) {

    *per = 6 * l;
    *area = (3 * pow(l,2) * sqrt(3))/2;
}

int main()
{
    float lado, area, perimetro;

    printf("\n\nDigite o lado do hexagono: ");
    scanf("%f", &lado);
    while (lado > 0)
    {
        calc_hexa(lado, &area, &perimetro);
        printf("\n\na area e o perímetro do hexagono regular de lado %f e igual a %f  e  %f", lado, area, perimetro);

        printf("\n\nDigite o lado do hexagono:");
        scanf("%f", &lado);
    }

    return 0;
}