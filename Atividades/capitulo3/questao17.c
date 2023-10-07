#include <stdio.h>
#include <conio.h>
int main() {
    int num, numinvertido = 0, aux;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    while (num != 0)
    {
        aux = num % 10;
        numinvertido = numinvertido * 10 + aux;
        num = num / 10;
    }
    printf("%d\n",numinvertido);
    return 0;
}