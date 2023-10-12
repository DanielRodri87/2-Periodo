#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    while ((c = getche()) != 27)
    {
        if (c >= 'a' && c <= 'z')
        {
            c -= 32;
        }
        printf(" %c\n", c);
    }
    return 0;
}