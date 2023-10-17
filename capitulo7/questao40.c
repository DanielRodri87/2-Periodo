#include <stdio.h>
#include <string.h>
void right(char str1[], char str2[], int n) {
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    if (n >= length1) {
        strcpy(str2, str1);
    } else {
        strncpy(str2, str1 + length1 - n, n);
        str2[n] = '\0';
    }
}
int main() {
    char minhaString1[] = "Hello, World";
    char minhaString2[20];
    int n = 5;
    right(minhaString1, minhaString2, n);
    printf("String 1: %s\n", minhaString1);
    printf("String 2: %s\n", minhaString2);
    return 0;
}
