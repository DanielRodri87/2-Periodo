// Teoria: O computador possui uma grande capacidade de memória RAM, que o programador pode utulizar em seus programas.

// Por ser muito grande, vamos utilizar um pedaço, um trecho, de memória como exemplo.

// Quando você declara uma variável, o compilador reserva uma região de memória para ela

// Portanto, cada variável fica em um endereço de memória diferente
//  Quando fazemos uuma atribuição a uma variável, o valor é colocado na região de memória que foi reservada para ela


//  Sendo assim, nós podemos manipular o conteúdo de uma variável utilizando ela mesmo ou utilizando o seu endereço

//  A linguagem C oferece um tipo especial de variável chamado ponteiro. Os ponteiros sçai variáveis que armazenam endereços de outras variáveis.

// char c = 'A';
// char *p = &c; --> recebo o endereço de C

#include <stdio.h>

int main()
{
    int a = 0, b = 0, *p1, *p2;
    a = 2;
    b = 2;
    p1 = &a;
    p2 = p1;

    *p2 = *p1 + p1;
    b = b * (*p1);
    (*p2)++;
    
    p1 = &b;

    printf(" %d %d \n", *p1, *p2);
    printf("%d %d \n", a, b);

    return 0;
}

