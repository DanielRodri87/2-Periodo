#include <stdio.h>

void primo(int num)
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
        printf("Primo");
    } else
    {
        printf("Não é primo");
    }
}

int main()
{
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    primo(n);
    return 0;
}