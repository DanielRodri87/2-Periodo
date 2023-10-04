#include <stdio.h>

int main()
{
    int qtdc, qtdp, cabecas, pesp, pesc, pes;
    printf("Quantidade de Coelhos: ");
    scanf("%d", &qtdc);
    printf("Quantidade de Patos: ");
    scanf("%d", &qtdp);
    cabecas = qtdc+qtdp;
    pesp = qtdp*2;
    pesc = qtdc*4;
    pes = pesp+pesc;
    printf("A quantidade total cabeças é: %d\n", cabecas);
    printf("A quantidade total pés é: %d", pes);
    return 0;
}