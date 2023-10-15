#include <stdio.h>
#include <string.h>

void trocar(char palavra[], int pos, char newletra) {
    palavra[pos] = newletra;
}

int main() {
    char palavra[100], newletra;
    int pos;

    printf("Digite palavra, o indice da letra que deseja substituir e a nova letra: ");
    scanf("%s %d %c", palavra, &pos, &newletra);

    trocar(palavra, pos, newletra);

    printf("%s", palavra);

    return 0;
}
