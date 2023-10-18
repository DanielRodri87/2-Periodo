#include <stdio.h>

union Data {
   int i;
   float f;
   char str[20];
} data;

void funcao(union Data data) {
   printf( "data.i : %d\n", data.i);
}

int main( ) {
   data.i = 10;
   
   funcao(data);

   return 0;
}
