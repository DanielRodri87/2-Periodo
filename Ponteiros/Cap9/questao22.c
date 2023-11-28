#include <stdio.h>
int main()
{
    static char *s = "Eu não vou sepultar Cesar";
    printf("a) %s\n", s);
    printf("b) %s\n", &s[0]);
    printf("c) %s\n", s+11);
    printf("d) %s\n", s[0]);


    return 0;
}