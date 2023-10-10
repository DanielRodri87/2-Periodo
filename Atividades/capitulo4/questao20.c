#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0, num, palpite = -1; // Palpite definido com um valor negativo para não correr riscos do computador atribuir o mesmo valor do sorteio
    srand(time(NULL));
    num = rand() % 101;
    while (num != palpite)
    {
        printf("Faca seu palpite de um numero inteiro entre 0 a 100: ");
        scanf("%d", &palpite);
        if (num == palpite)
        {
            printf("Correto!\n");
        } else if (palpite > num)
        {
            printf("Muito Grande\n");
        } else
        {
            printf("Muito Pequeno\n");
        }
        i++;
    }
    printf("Total de tentativas: %d\nNumero correto: %d\n", i-1, num);
    
    return 0;
}