#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    printf("|Caractere\t|\tDecimal\t\t|\tHexadecimal|\n");
    printf("------------------------------------------------------------\n");
    for (i = 32; i <= 255; i++) {
        printf("\t%c\t\t%d\t\t\t%x\n", (char)i, i, i);
    }
    return 0;
}