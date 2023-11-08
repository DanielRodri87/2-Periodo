#include <stdio.h>

void verificarValoresVetores(int v[], int v1[], int tamanho1, int tamanho2){

    int i, j, cont = 0;

    printf("\n");

    for(i = 0; i < tamanho1; i++){
        printf("Digite o valor da posicao [%d] do primeiro vetor: ", i);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < tamanho2; i++){
        printf("Digite o valor da posicao [%d] do segundo vetor: ", i);
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < tamanho1; i++){
        for(j = 0; j < tamanho2; j++){
            if(v[i] == v1[j]){
                cont++;
            }
        }
    }


    printf("\nO numero total de valores iguais nos dois vetores eh: %d\n", cont);
}

int main(){

    int tam1, tam;

    printf("Digite o tamanho de linhas do primeiro vetor: ");
    scanf("%d", &tam1);

    int v[tam1];

    printf("Digite o tamanho de linhas do segundo vetor: ");
    scanf("%d", &tam);

    int v1[tam];

    verificarValoresVetores(v, v1, tam1, tam);   

    return 0;
}