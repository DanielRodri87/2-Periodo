#include <stdio.h>
#include <ctype.h>

int strcomp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        char c1 = tolower(*str1); 
        char c2 = tolower(*str2);

        if (c1 != c2) {
            return (int)c1 - (int)c2; 
        }

        str1++;
        str2++;
    }
    return 0;
}

int main() {
    const char *str1 = "Exemplo";
    const char *str2 = "exEMPLe";

    int saida = strcomp(str1, str2);

    if (saida == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("Diferença ASCII dos primeiros caracteres diferentes: %d\n", saida);
    }

    return 0;
}
