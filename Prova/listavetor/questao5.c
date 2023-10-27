#include <stdio.h>

int main()
{
    int x[10], repetidos[10], i, j, cout = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor de x[%d]: ", i+1);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <10; j++)
        {
            if (x[i] == x[j])
            {
                if (i != j)
                {
                    repetidos[i] = x[i];
                    cout += 1;
                }
            }
        }
    }


    printf("Repetidos:\n");
    if (cout == 0)
    {
        printf("Não há números repetidos\n");
    }
    else
    {
        for (i = 0; i < cout; i++)
        {
            printf("%d ", repetidos[i]);
        }
    }
    return 0;
}
