
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    char letra;
    printf("Digite uma letra: \n");
    letra = getch();

    if(letra >= 'a' && letra <= 'z'){
        printf("Letra digitada: %c\n", letra - 32);
    }else{
        printf("Letra digitada: %c\n", letra);
    }

    return 0;
}

