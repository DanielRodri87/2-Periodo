#include <stdio.h>
#include <string.h>
#include <ctype.h>
void LTrim(char str[]) {
    int length = strlen(str);
    int start = 0;
    while (isspace((unsigned char)str[start])) {
    start++;
    }
    if (start > 0) {
        memmove(str, str + start, length - start + 1);
    }
}
void RTrim(char str[]) {
    int length = strlen(str);
    while (length > 0 && isspace((unsigned char)str[length - 1])) {
        str[--length] = '\0';
}
}
void Trim(char str[]) {
    LTrim(str);
    RTrim(str);
}
int main() {
    char myString[] = " Hello, World! ";
    printf("Original String: \"%s\"\n",
    myString);
    LTrim(myString);
    printf("After LTrim: \"%s\"\n", myString);
    char myString2[] = " Hello, World! ";
    RTrim(myString2);
    printf("After RTrim: \"%s\"\n", myString2);
    char myString3[] = " Hello, World! ";
    Trim(myString3);
    printf("After Trim: \"%s\"\n", myString3);
    return 0;
}