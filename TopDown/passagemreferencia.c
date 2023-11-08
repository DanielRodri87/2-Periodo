//  Passagem por Referência:


// TEORIA

// Passagem por valor – permite usar dentro de uma função uma cópia do valor de uma variável,
// porém não permite alterar o valor da variável original (somente a cópia pode ser alterada).

// Passagem por referência – É passada para a função uma referência da variável, sendo possível
// alterar o conteúdo da variável original usando-se esta referência.


// Usando ponteiros (também chamados de apontadores) é possível alterar os valores das variáveis passadas
// como argumentos para uma função.



// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Crie um programa em C que peça para o usuário uma matriz 3x3, que exiba ela. Use funções para preencher
// a matriz e exibi-la

#include <stdio.h>
#define t 3

int l, c;


void preencher(int mat[][t])
{
    for (l = 0; l < t; l++)
    {
        for (c = 0; c < t; c++)
        {
            printf("Digite o valor de mat[%d][%d]: ", l, c);
            scanf("%d", &mat[l][c]);
        }        
    }
}

void exibir(int mat[][t])
{
    for (l = 0; l < t; l++)
    {
        for (c = 0; c < t; c++)
        {
            printf("| %d |", mat[l][c]);
        }  
        printf("\n");   
    }
}


int main()
{
    int matriz[t][t];
    preencher(matriz);
    exibir(matriz);
    return 0;
}