#include <stdio.h>
#include <stdlib.h>

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd){
    int i, j, k, l, aux, *x3;
    *qtd = n1 + n2;
    x3 = (int *) malloc(*qtd * sizeof(int));
    for(i = 0; i < n1; i++){
        x3[i] = x1[i];
    }
    for(j = 0; j < n2; j++){
        x3[i] = x2[j];

        i++;
    }
    for(k = 0; k < *qtd; k++){
        for(l = k + 1; l < *qtd; l++){
            if(x3[k] > x3[l]){
                aux = x3[k];
                x3[k] = x3[l];
                x3[l] = aux;
            }
            
        }
    }
    return x3;
}

int main()
{
    int i, n1, n2, qtd;
    int *x1, *x2, *x3;
    printf("Digite o tamanho do vetor 1: ");
    scanf("%d", &n1);
    printf("Digite o tamanho do vetor 2: ");
    scanf("%d", &n2);
    x1 = (int *) malloc(n1 * sizeof(int));
    x2 = (int *) malloc(n2 * sizeof(int));
    printf("Digite os valores do vetor 1: ");
    for(i = 0; i < n1; i++){
        scanf("%d", &x1[i]);
    }
    printf("Digite os valores do vetor 2: ");
    for(i = 0; i < n2; i++){
        scanf("%d", &x2[i]);
    }
    x3 = uniao(x1, x2, n1, n2, &qtd);
    printf("Vetor 1: ");
    for(i = 0; i < n1; i++){
        printf("%d ", x1[i]);
    }
    printf("\nVetor 2: ");
    for(i = 0; i < n2; i++){
        printf("%d ", x2[i]);
    }

    int tam = 0;
    printf("\nVetor 3: ");
    for(i = 0; i < qtd; i++){
        if (x3[i] == x3[i+1])
            continue;
        else
            printf("%d ", x3[i]);
        tam++;
    }
    printf("\nTamanho do vetor 3: %d", tam);

    

    printf("\n");
    free(x1);
    free(x2);
    free(x3);
    return 0;
}