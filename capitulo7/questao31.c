#include <stdio.h>

int indiceCH(const char *str, char ch) {
    int id = 0;
    while (str[id] != '\0') {
        if (str[id] == ch) {
            return id;
        }
        id++;
    }
    return -1; 
}

int main() {
    const char *str;
    char ch;

    scanf("%s", str);
    scanf(" %c", &ch);

    int id = indiceCH(str, ch);

    if (id != -1) {
        printf("O caractere '%c' foi encontrado na posição %d.\n", ch, id);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", ch);
    }

    return 0;
}
