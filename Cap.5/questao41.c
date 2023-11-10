#include <stdio.h>

int greg_juli(int dia_temp, int mes_temp, int ano_temp){

    int juliana;

    juliana = (1461 * (ano_temp + 4800 + (mes_temp - 14) / 12)) / 4;
    juliana += (367 * (mes_temp - 2 - 12 * ((mes_temp - 14) / 12))) / 12;
    juliana -= (3 * ((ano_temp + 4900 + (mes_temp - 14) / 12) / 100)) / 4;
    juliana += dia_temp - 32075;

return juliana;
}


int main(){

    int dia, mes, ano;
    int data_juliana;

    printf("Digite o dia correspondente no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    data_juliana = greg_juli(dia, mes, ano);

    printf("\nA data Juliana correspondente e': %d", data_juliana);

return 0;
}
