#include <stdio.h>

int main()
{
    int i = 5, *p;
    p = &i;
    printf("%p\t%d\t%d\t%d\t%d\n", p, (*p+2), **&p, (3**p), (**&p+4));
    
    return 0;
}
