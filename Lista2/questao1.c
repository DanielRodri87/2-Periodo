#include <stdio.h>
#define t 100

float maiorA(float v[t])
{
    float maior = 0;
    for (int i = 0; i < t; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
    }
    return maior;
}

float menorB(float v[t])
{
    float menor = v[0];
    for (int i = 0; i < t; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
        }
    }
    return menor;
}

void soma_e_media(float v[t])
{
    float media, soma = 0;
    float saida[2];

    for (int i = 0; i < t; i++)
    {
        soma += v[i];
    }
    media = soma / t;
    printf("A soma dos elementos é: %.2f\nA média dos elementos é: %.2f", soma, media);
}

void soma_vetorc(float v1[t], float v2[t])
{
    float vetorc[t];
    for (int i = 0; i < t; i++)
    {
        vetorc[i] = v1[i] + v2[i];
    }

    printf("O vetor C é: ");
    for (int i = 0; i < t; i++)
    {
        printf("%.2f ", vetorc[i]);
    }
    printf("\n");
}

void mostrar_vetor(float v[t])
{
    int i;
    printf("Os valores do vetor, são: ");
    for (i = 0; i < t; i++)
    {
        printf("%.2f ", v[i]);
    }
    printf("\n");
}

void preencher(float v1[t], float v2[t])
{
    for (int i = 0; i < t; i++)
    {
        printf("Preencha o valores A e B para a posição %d: ", i + 1);
        scanf("%f %f", &v1[i], &v2[i]);
    }
}

int main()
{
    float vA[t], vB[t], r;
    int op, l;

    preencher(vA, vB);

    printf("MENU: \n1 - Maior Elemento do Vetor A\n2 - Menor elemento do Vetor B\n3 - Calcular a SOMA e a MÉDIA dos elementos do Vetor A\n4 - Calcular a SOMA e a MÉDIA dos elementos do Vetor B\n5-  Montar o Vetor C, que é a soma dos vetores A e B e escrever os elementos do Vetor C\n6 - Escrever os elementos do Vetor A\n7 - Escrever os elementos do Vetor B\n8 - Sair:\n-> ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        r = maiorA(vA);
        printf("O maior valor do vetor A, é: %.2f", r);
        break;
    case 2:
        r = menorB(vB);
        printf("O menor valor do Vetor B, é: %.2f", r);
        break;
    case 3:
        soma_e_media(vA);
        break;
    case 4:
        soma_e_media(vB);
        break;
    case 5:
        soma_vetorc(vA, vB);
        break;
    case 6:
        mostrar_vetor(vA);
        break;
    case 7:
        mostrar_vetor(vB);
        break;
    case 8:
        printf("Saindo...\n");
        break;
    default:
        printf("Código Inválido\n");
        break;
    }

    return 0;
}
