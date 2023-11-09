#include <stdio.h>

int bissexto(int x)
{
    if (x % 400 == 0)
    {
        return 1;
    } else {
        if (x % 100 != 0 && x % 4 == 0)
        {
            return 1;
        }
        return 0;
    }

}


int main()
{
    int ano, r;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    r = bissexto(ano);
    printf("%d", r);
    return 0;
}