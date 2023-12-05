// Escreva um programa que declare uma matriz 10x10 de inteiros. Você criar uma função void (procedimento)
// para inicializar a matriz com zeros usando um ponteiro para a matriz. Faça outra função void para preencher
// depois a matriz com os números de 99 a 0, também usando ponteiro para matriz como parâmetro.
// Por fim, o programa deve imprimir a matriz.

#include<stdio.h>
#include<string.h>
void inicializa(int *mat) {
int i;

for(i=0; i < 100; i++) {
  *mat=0;
  mat++;
}
}
void preenche(int *mat) {
int i;

for(i=0; i < 100; i++) {
  *mat=99 - i;
  mat++;
}
}
int main() {
int matriz[10][10];
int i, j;

inicializa(matriz);
preenche(matriz);
for(i=0; i< 10; i++){
 printf("\n");
 for (j=0; j < 10; j++)
   printf("mat[%d][%d]= %d ", i,j,matriz[i][j]);
}
}