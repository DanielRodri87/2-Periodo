#include <stdio.h>
int n = 3;
void levetor(float x1[n]){
   int i=0;
   for ( i = 0; i < n; i++)
   {
    scanf("%f", &x1[i]);
   }
   
}
int x = 3;
float maiorelemento(float zelda[x]){
    int i=0;
    float malem=0;
    for ( i = 0; i < x; i++)
    {
        if (zelda[i] > malem)
        {
            malem = zelda[i];
        }
        
    }
   return malem;
}
int y = 3;
float menorelemento(float omega[y]){
    int i= 0;
    float melem= y;
    for ( i = 0; i < y; i++)
    {
        if (omega[i] < melem)
        {
            melem = omega[i];
        }
        
    }
        return melem;
} 
int z=3;
float somadoselementos(float alfa[z]){
    float soma;
    int i=0;
    for (i = 0; i < z; i++)
    {
        soma = soma + alfa[i];
    }
    return soma;
} 

int k=3;
 float mediavetor(float beta[k]){
    float soma, media;
    int i=0;
    for ( i = 0; i < k; i++)
    {
        soma = soma + beta[i];
    }
       media = soma / 3;
      return media;
    
} 
int j=3;
float somarvetores(float x[j], float r[j], float d[j]){
    int i=0;
    float soma=0;

    for ( i = 0; i < j; i++)
    {
       soma = x[i] + r[i];
       d[i] = soma;
    }
    
}
 
 int u=3;
 float escrevervetor(float m[u]){
    int i=0;
    for ( i = 0; i < u; i++)
    {
        printf("Digite o valor do %d elemento: ", i);
        scanf("%f", &m[i]);
    }
    
 }
int main(){
    float vetorA[3], vetorB[3], vetorC[3];
    char op;

    printf("Digite a opção desejada:\nA-Maior elemento do Vetor A\nB-Menor elemento do Vetor B\nC- A soma e a média dos elementos do Vetor A\nD- A soma e média dos elementos do Vetor B\nE- Montar o Vetor C\nF-Escrever os elementos do Vetor A\nG-Escrever os elementos do vetor B\nH-Sair do Programa!: ");
    scanf("%c", &op);

    switch (op)
    {
    case 'A':
        levetor(vetorA);
        maiorelemento(vetorA);
        break;
    case 'B': 
        levetor(vetorB);
        menorelemento(vetorB);
        break;
    case 'C': 
        levetor(vetorA);
        somadoselementos(vetorA);
        mediavetor(vetorA);
        break; 
    case 'D': 

        levetor(vetorB);
        somadoselementos(vetorB);
        mediavetor(vetorB);
        break;
    case 'E': 
        levetor(vetorA);
        levetor(vetorB);
        somarvetores(vetorA, vetorB, vetorC);
        printf("Vetor C:", vetorC);
        break;
    case 'F': 
        levetor(vetorA);
        escrevervetor(vetorA);
        break;
    case 'G': 
        levetor(vetorB);
        escrevervetor(vetorB);
        break;
    case 'H': 
        break;
    }
}