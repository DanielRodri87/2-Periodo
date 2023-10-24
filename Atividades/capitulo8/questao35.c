#include <stdio.h>
#include <string.h> 

int totalDias(int mes) {
    int diasmes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;

    if (mes >= 1 && mes <= 12) {
        for (int i = 1; i <= mes; i++) {
            total += diasmes[i];
        }
        return total;
    } else {
        return -1;
    }
}

int main() {
    char nomeMes[20]; 
    printf("Digite o nome do mes: ");
    scanf("%s", nomeMes); 

    char *meses[13] = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    int mes = -1;
    for (int i = 1; i <= 12; i++) {
        if (strcmp(nomeMes, meses[i]) == 0) {
            mes = i;
            break;
        }
    }

    if (mes != -1) {
        int total = totalDias(mes);
        printf("O total de dias ate o mes %s é %d.\n", nomeMes, total);
    } else {
        printf("Mes invalido\n");
    }

    return 0;
}
