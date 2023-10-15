#include <stdio.h>
#include <string.h>

void inicializa(char *str, char ch, int n) {
    if (n < 0) {
        n = 0;
    }

    for (int i = 0; i < n; i++) {
        str[i] = ch;
    }

    str[n] = '\0';
}

int main() {
    char palavra[20];  
    char caractere = 'A';
    int n = 10;    

    inicializa(palavra, caractere, n);

    printf("String inicializada: %s\n", palavra);

    return 0;
}
