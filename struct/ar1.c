#include <stdio.h>
#include <string.h>
struct funcionario
{
    char nome[80];
    int idade;
    float notas[3];
}; 
int main()
{
    struct funcionario f1;
    int i, j;
    strcpy(f1.nome, "Daniel");
    f1.idade = 20;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &f1.notas[i]);
    }

    printf("Nome: %s\n", f1.nome);
    printf("Idade: %d\n", f1.idade);
    printf("Notas: ");
    for (i = 0; i < 3; i++)
    {
        printf("%.2f ", f1.notas[i]);
        
    }
    return 0;
}