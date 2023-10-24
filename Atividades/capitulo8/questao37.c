#include <stdio.h>
#include <string.h>

struct Mes {
    char nome[20];
    int dias;
};

int main() {
    struct Mes meses[12] = {
        {"Janeiro", 31},
        {"Fevereiro", 28},
        {"Março", 31},
        {"Abril", 30},
        {"Maio", 31},
        {"Junho", 30},
        {"Julho", 31},
        {"Agosto", 31},
        {"Setembro", 30},
        {"Outubro", 31},
        {"Novembro", 30},
        {"Dezembro", 31}
    };
    
    char mesInput[20];
    int dia, ano;
    
    printf("Digite o dia: ");
    scanf("%d", &dia);
    
    printf("Digite o mês (número, nome ou abreviação): ");
    scanf("%s", mesInput);
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    int totalDias = 0;
    int mesEncontrado = -1;
    
    for (int i = 0; i < 12; i++) {
        if ((strcmp(mesInput, meses[i].nome) == 0) || (strcmp(mesInput, meses[i].nome) == 0) || (strcmp(mesInput, meses[i].nome) == 0)) {
            mesEncontrado = i;
            break;
        }
    }
    
    if (mesEncontrado != -1) {
        for (int i = 0; i < mesEncontrado; i++) {
            totalDias += meses[i].dias;
        }
        totalDias += dia;
        
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            if (mesEncontrado > 1) {
                totalDias++;
            }
        }
        
        printf("Total de dias do ano até a data inserida: %d\n", totalDias);
    } else {
        printf("Mês inválido: %s\n", mesInput);
    }
    
    return 0;
}
