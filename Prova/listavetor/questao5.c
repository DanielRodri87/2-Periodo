#include <stdio.h>

int main(){
    int vetor[10], i, j, k;

    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                for(k = j; k < 10; k++){
                    vetor[k] = vetor[k + 1];
                }
            }
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}