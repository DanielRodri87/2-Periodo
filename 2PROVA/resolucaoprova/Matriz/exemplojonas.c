#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Escreva uma função que recebe uma matriz não quadrada como parâmetro 
e calcula sua transposta in-place usando ponteiros.
*/

void tam(int *l,int *c){
    printf("Digite a quantidade de linha e coluna da matriz:");
    scanf("%d %d",l,c);
}

void alocar(int ***a,int *l,int *c){
    *a = (int**)calloc(*l,sizeof(int));
    
    for(int i=0;i<*l;i++){
        *((*a)+i) = (int*)calloc(*c,sizeof(int));
    }
}

void realocar(int ***a,int *l,int *c){
    
    *a = (int**)realloc(*a,*l * sizeof(int));
    
    for(int i=0;i<*l;i++){
        *((*a)+i) = (int*)realloc(*((*a)+i),*c * sizeof(int));
    }

}

void preenche(int **a,int *l,int *c){
    srand(time(NULL));

    for(int i=0;i<*l;i++){
        for(int j=0;j<*c;j++){
            *(*(a+i)+j) = rand() % 100;
        }
    }
}

void exibe(int **a,int *l,int *c){
    for(int i=0;i<*l;i++){
        for(int j=0;j<*c;j++){
            printf("%2d ",((a+i)+j));
        }
        printf("\n");
    }
}

void liberar(int **a,int *c){
    for(int i=0;i<*c;i++){
        free(*(a+i));
    }
    free(a);

}

void troca(int **a,int *l,int *c){
    int *v,**temp;
    v=(int*)(calloc(*c,sizeof(int)));
    alocar(&temp,l,c);

    for(int i=0;i<*l;i++){
        for(int j=0;j<*c;j++){
            *(*(temp+i)+j) = *(*(a+i)+j); 
        }   
    }

    realocar(&a,c,l);

    for(int i=0;i<*c;i++){

        for(int j=0;j<*l;j++){
            *(v + j) = *(*(temp + j) + i);
            printf("%d ", *(v+j));
        }
        printf("\n");
        for(int j=0;j<*l;j++){
            *(*(a+j)+i) = *(v+j);
        }
    }

    liberar(temp,l);
    free(v);
}

int main(){
    int **a,l,c;
    
    tam(&l,&c);
    alocar(&a,&l,&c);

    preenche(a,&l,&c);
    printf("Matriz antes da troca\n");
    exibe(a,&l,&c);
    troca(a,&l,&c);
    printf("Matriz depois da troca\n");
    exibe(a,&c,&l);

    liberar(a,&l);

    return 0;
}