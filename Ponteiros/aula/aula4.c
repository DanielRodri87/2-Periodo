#include<stdio.h>
#include<stdlib.h>

void preencher(int linhas, int colunas, float **matriz){
    int i, j;
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("Digite o valor da posição [%d] [%d] da matriz: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}
void somaDiagonalPrincipal(int linhas, int colunas, float **matriz){
    int i;
    float soma = 0;
    for(i=0; i<linhas; i++){
        soma += matriz[i][i];
    }
    printf("A soma dos elementos da diagonal principal é: %.2f\n", soma);
}
int main (){
    int linhas, colunas;

    printf("Digite a quantidade de linhas da matriz: \n");
    scanf("%d",&linhas);
    printf("Digite a quantidade de colunas da matriz: \n");
    scanf("%d",&colunas);

    if (linhas == colunas){
        float **matriz; // declara um ponteiro duplo para armazenar a matriz.
        matriz = (float **)malloc(linhas * sizeof(float *)); //aloca memória para as linhas da matriz. linhas * sizeof(float *) indica o tamanho necessário para armazenar todas as linhas da matriz.
        for (int i = 0; i < linhas; i++) {
            matriz[i] = (float *)malloc(colunas * sizeof(float)); // aloca memória para as colunas de cada linha da matriz. colunas * sizeof(float) indica o tamanho necessário para armazenar todas as colunas de uma linha.
        }

        

        preencher(linhas, colunas, matriz);
        somaDiagonalPrincipal(linhas, colunas, matriz);

        for (int i = 0; i < linhas; i++) {
            free(matriz[i]);
        }
        free(matriz);
        
    } else {
        printf("A matriz precisa ser quadrada (mesma quantidade de linhas e colunas).\n");
    }

    return 0;
}