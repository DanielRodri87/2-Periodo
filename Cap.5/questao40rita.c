#include <stdio.h>

int anobissexto(int ano){
    if (ano % 400 == 0)
    {
        return 1;
    } else
    {
        if ( ano % 100 != 0 && ano % 4 == 0)
        {
            return 1;
        }
        return 0;
    }
    
} 

int main()
{
    int x, r;
    printf("Digite um ano: ");
    scanf("%d", &x);
    
}