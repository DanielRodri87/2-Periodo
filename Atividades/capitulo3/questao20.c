#include <stdio.h>
int main(){
    int pos, i, a = 0, b = 1, prox;
    printf("Informe a posicao do numero na sequencia de Fibonacci: ");
    scanf("%d", &pos);
    if(pos == 0){
        printf("0");
    } else if(pos == 1){
        printf("1");
    } else {
        for(i = 2; i <= pos; i++)
        {
            prox = a + b;
            a = b;
            b = prox;
        }
        printf("%d\n", prox);
    }
    return 0;
}