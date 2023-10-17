#include <stdio.h>
#include <string.h>

void trocar(char palavra[], char letra, char newletra) {
        for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == letra) {
            palavra[i] = newletra;
        }
    }
}

int main() {
    char palavra[100], letra, newletra;

    printf("Digite palavra, letra que deseja substituir e a nova letra: ");
    
    scanf("%s %c %c", palavra, &letra, &newletra);

    trocar(palavra, letra, newletra);
    printf("%s", palavra);

    return 0;
}
