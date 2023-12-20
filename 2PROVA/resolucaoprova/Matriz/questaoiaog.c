// Crie um programa em C que construa uma lista encadeada de números inteiros. Permita ao usuário
// adicionar, remover e pesquisar elementos na lista. Utilize alocação dinâmica para criar e liberar
// nós da lista.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu;
    printf("1 - Adicionar\n2 - Remover\n3 - Pesquisar\n4 - Sair\n: -> ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Tela de adicionar\n");
        break;
    case 2:
        printf("Tela de remover\n");
        break;
    case 3:
        printf("Tela de pesquisar\n");
        break;
    case 4:
        exit(1);
        break;
    default:

        break;
    }

    return 0;
}