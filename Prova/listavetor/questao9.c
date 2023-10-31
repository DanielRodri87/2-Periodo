#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int cartela[5][5];
    int B[5], I[5], N[5], G[5], O[5];
    int l, c, i, j;
    
    srand(time(NULL));

    //  B
    for (i = 0; i < 5; i++)
    {
        int novoNumero = (rand() % (10 - 1 + 1)) + 1;

        for (j = 0; j < i; j++) {
            if (B[j] == novoNumero) {
                i--;
                break;
            }
        }
        if (j == i) {
            B[i] = novoNumero;
        }

    }

    // I
    for (i = 0; i < 5; i++)
    {
        int novoNumero = (rand() % (20 - 11 + 1)) + 11;

        for (j = 0; j < i; j++) {
            if (I[j] == novoNumero) {
                i--;
                break;
            }
        }
        if (j == i) {
            I[i] = novoNumero;
        }

    }
    // N
    for (i = 0; i < 5; i++)
    {
        int novoNumero = (rand() % (30 - 21 + 1)) + 21;

        for (j = 0; j < i; j++) {
            if (N[j] == novoNumero) {
                i--;
                break;
            }
        }
        if (j == i) {
            N[i] = novoNumero;
        }

    }

    // G
    for (i = 0; i < 5; i++)
    {
        int novoNumero = (rand() % (40 - 31 + 1)) + 31;

        for (j = 0; j < i; j++) {
            if (G[j] == novoNumero) {
                i--;
                break;
            }
        }
        if (j == i) {
            G[i] = novoNumero;
        }

    }

    // O
    for (i = 0; i < 5; i++)
    {
        int novoNumero = (rand() % (50 - 41 + 1)) + 41;

        for (j = 0; j < i; j++) {
            if (O[j] == novoNumero) {
                i--;
                break;
            }
        }
        if (j == i) {
            O[i] = novoNumero;
        }

    }

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            if (c == 0)
            {
                cartela[l][c] = B[l];
            }
            else if (c == 1)
            {
                cartela[l][c] = I[l];
            }
            else if (c == 2)
            {
                cartela[l][c] = N[l];
            }
            else if (c == 3)
            {
                cartela[l][c] = G[l];
            }
            else if (c == 4)
            {
                cartela[l][c] = O[l];
            }
        }
    }
    printf("_________________________________________\n");
    printf("|                DANIEL.BET             |\n");
    printf("|---------------------------------------|\n");
    printf("|   B   |   I   |   N   |   G   |   O   |\n");
    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            if (c == 2 && l == 2)
            {
                printf("| BINGO ");
            } else
            {
                printf("|  %2d   ", cartela[l][c]);
            }
        }
        printf("|\n");
    }

    return 0;
}
