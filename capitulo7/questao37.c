#include <stdio.h>
#include <string.h>
void strins(char str[], char ch, int pos) {
    int length = strlen(str);
    if (pos < 0 || pos > length) {
        printf("Posição inválida para inserção.\n");
        return;
    }
    for (int i = length; i >= pos; i--) {
        str[i + 1] = str[i];
    }
    str[pos] = ch;
}
void strinss(char str1[], char str2[], int pos)
{
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    if (pos < 0 || pos > length1) {
        printf("Posição inválida para inserção.\n");
    return;
    }
    for (int i = length1; i >= pos; i--) {
        str1[i + length2] = str1[i];
    }
    for (int i = 0; i < length2; i++) {
        str1[pos + i] = str2[i];
    }
}
int main() {
    char minhaString1[50] = "Hello, World!";
    char minhaString2[20] = "Awesome ";
    int posicaoParaInserir = 6;
    printf("String 1 antes da inserção: %s\n",
    minhaString1);
    strinss(minhaString1, minhaString2,
    posicaoParaInserir);
    printf("String 1 após a inserção: %s\n",
    minhaString1);
    return 0;
}
