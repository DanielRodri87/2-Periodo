// Desenvolva um programa que verifique se uma matriz quadrada de ordem n é diagonalmente
// dominante. Utilize ponteiros para percorrer os elementos e implemente uma função que realize
// essa verificação. 

#include <stdio.h>

int main()
{
    int tam, l, c;
    printf("Informe o tamanho das linhas e colunas da matriz: ");
    scanf("%d", &tam);

    int matriz[tam][tam];

    for (l = 0; l < tam; l++)
    {
        for (c = 0; c < tam; c++)
        {
            printf("Informe matriz[%d][%d]: ", l+1, c+1);
            scanf("%d", &matriz[l][c]);
        }
    }
    

    return 0;
}