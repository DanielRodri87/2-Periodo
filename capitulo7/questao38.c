#include <stdio.h>
#include <string.h>
void left(char str1[], char str2[], int n) {
    strncpy(str2, str1, n);
}
int main() {
    char minhaString1[] = "Hello, World!";
    char minhaString2[20];
    int n = 5;
    left(minhaString1, minhaString2, n);
    printf("String 1: %s\n", minhaString1);
    printf("String 2: %s\n", minhaString2);
    return 0;
}
