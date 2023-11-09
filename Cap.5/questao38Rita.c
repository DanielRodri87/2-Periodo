#include <stdio.h>

int numeroprimo(int x){
    int count = 0;
    int cont_primo = 0;

    while (count <= x)
    {
        count++;

        if (x % count == 0)
        {
            cont_primo++;
        }
    }
    if (cont_primo == 2)
    {
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int num, r;

    printf("Digite o número: ");
    scanf("%d", &num);

    r = numeroprimo(num);

    if (r == 1)
    {
        printf("Primo");
    } else
    {
        printf("O número não é primo");
    }

    return 0;

}