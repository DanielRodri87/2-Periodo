#include <stdio.h>

int X[5] = {1, 2, 3, 4, 5}, Y[5] = {5, 4, 3, 2, 1}, i = 0, AUX[5];

int vetores(int X[5], int AUX[5], int Y[5]){
    for ( i = 0; i < 5; i++)
    {
        AUX[i] = X[i];
        X[i] = Y[i];
        Y[i] = AUX[i];
    }
    
}
    int main(){

        printf("Antes de trocar \n");
        printf("Valores de X: \n");
        for ( i = 0; i < 5; i++)
        {
            printf("%d ", X[i]);
        }
        printf("\nValores de Y: \n");
        for ( i = 0; i < 5; i++)
        {
            printf("%d ", Y[i]);
        }
        vetores(X, AUX, Y);
        printf("\nDepois de trocar \n");
        printf("Valores de X: \n");
        for ( i = 0; i < 5; i++)
        {
            printf("%d ", X[i]);
        }
        printf("\nValores de Y: \n");
        for ( i = 0; i < 5; i++)
        {
            printf("%d ", Y[i]);
        }
        return 0;
    }