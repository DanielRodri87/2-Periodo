// Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase (max. 100 caracteres)
// e armazeá-la num vetor. Imprimir a frase lida trocando as vogais, isto é, trocar 'a' pelo 'u', 'e'
// pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'. Usar uma função void (procedimento) para realizar
// a troca e uma função para realizar a impressão da frase trocada. A função deve ter como parâmetro
// um ponteiro char referente ao vetor. Dica: Use a função gets() da biblioteca string.h para realizar a
// leitura da frase. use o switch para realizar as trocas. Só considere as letras minúsculas.

#include <stdio.h>
#include <string.h>
void procedimento(char *texto)
{
    int i;
    for (i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == 'a');
        {
            texto[i] = 'u';
        }

        // deveria fazer para o resto das vogais mas deu preguiça

    }
}

int main()
{
    char palavra[100];
    printf("Informe a palavra: ");
    gets(palavra);

    printf("A palavra é: %s", palavra);
    procedimento(palavra);
    printf("A palavra é: %s", palavra);
    return 0;
}