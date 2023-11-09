#include <stdio.h>


int primo(int num)
{
    int cont = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
           cont++; 
        }
    }

    if (cont == 2)
    {
        return 1;
    } else
    {
        return 0;
    }
}

void pesquisa_primos(int num) {
    printf("Número par: %d, Primos: ", num);
    for (int i = 2; i <= num; ++i) {
        if (primo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void checar_numeros(int start, int end) {
    for (int num = start; num <= end; num += 2) {
        pesquisa_primos(num);
    }
}

int main() {
    checar_numeros(700, 1100);

    return 0;
}