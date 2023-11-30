#include <stdio.h>
#include <stdlib.h>
const int true = 1;
typedef void (*PFunc)(void);
PFunc RetornaPFunc(int opcao);
void Abrir()
{
    printf("Abrindo...\n");
}
void Fechar()
{
    printf("Fechando...\n");
}
void Salvar()
{
    printf("Salvando...\n");
}
PFunc RetornaPFunc(int opcao)
{
    switch (opcao)
    {
    case 0:
        return &Abrir;
    case 1:
        return &Fechar;
    case 2:
        return &Salvar;
    default:
        printf("Opção inválida!\n");
        exit(EXIT_FAILURE);
    }
}
int main()
{
    PFunc ptr;
    do
    {
        int i;
        printf("0 - ABRIR\n");
        printf("1 - FECHAR\n");
        printf("2 - SALVAR\n");
printf("\nEscolha uma opcao:");
scanf("%d", &i);
if (i < 0 || i > 2) break;
ptr = RetornaPFunc(i);
(ptr)();
    } while (true);
    return 0;
}
