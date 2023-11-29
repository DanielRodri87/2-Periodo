#include <stdio.h>
#include <string.h>

void inverter(char *string) {
    int i, j;
    int len = strlen(string);
    char aux;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        aux = string[i];
        string[i] = string[j];
        string[j] = aux;
    }
}

int main() {
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Antes: %s\n", palavra);
    inverter(palavra);
    printf("Depois: %s\n", palavra);

    return 0;
}
