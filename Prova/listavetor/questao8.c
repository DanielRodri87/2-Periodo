// 111.	Faça programa que leia uma matriz 3x9 com valores reais. Em seguida: 
// •	Imprima a soma de todos os elementos das colunas ímpares.
// •	Imprima a média aritmética dos elementos da segunda e quarta colunas.

// 0:1, 0:3
// 1:1, 1:3
// 2:1, 3:3

#include <stdio.h>

int main()
{
    float mat[3][9], soma = 0, soma2 = 0, media;
    int l, c;
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 9; c++)
        {
            printf("Digite o valor para vetor[%d][%d]: ", l, c);
            scanf("%f", &mat[l][c]);
        }
    }

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 9; c++)
        {
            if (c % 2 != 0)
            {
                soma += mat[l][c];
            }
        }
    }

    for (l = 0; l < 3; l++)
    {
        soma2 += mat[l][1];
        soma2 += mat[l][3];
      
    }
    
    media = soma2/6;


    printf("A soma das colunas ímpares é: %.2f\n", soma);
    printf("A média das colunas 2 e 4 é: %.2f\n", media);
    return 0;
}