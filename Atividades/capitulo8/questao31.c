#include <stdio.h>

struct XXX
{
    float f;
    union 
    {
        float ff;
        int x[2];
    };
    
} VV;

int main()
{
    // Valor ff
    ff = 5.5; // a
    VV.f = 5.5; // b
    VV.ff = VV.f; // c
    f = 5.5; // d
    VV.x[0] = 5; // e
    x[1] = x[0]; // f

// As erradas são: a), d) e f)

    return 0;
}