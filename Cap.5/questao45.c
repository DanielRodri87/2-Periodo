#include <stdio.h>

void pascoa(int ano, int *mes, int *dia) {
    int A, B, C, D, E, F, G, H, I, K, L, M;

    A = ano % 19;
    B = ano / 100;
    C = ano % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = (19 * A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2 * E + 2 * I - H - K) % 7;
    M = (A + 11 * H + 22 * L) / 451;

    *dia = ((H + L - 7 * M + 114) % 31) + 1;
    *mes = (H + L - 7 * M + 114) / 31;
}

void sextaFeiraSanta(int ano, int *mes, int *dia) {
    pascoa(ano, mes, dia);
    *dia -= 2;

    if (*dia <= 0) {
        *mes -= 1;
        *dia += 31;
    }
}

void tercaCarnaval(int ano, int *mes, int *dia) {
    pascoa(ano, mes, dia);
    *dia -= 47;

    while (*dia <= 0) {
        *mes -= 1;
        if (*mes == 0) {
            *mes = 12;
            ano -= 1;
        }
        *dia += 31;
    }
}



void corpusChristi(int ano, int *mes, int *dia) {
    pascoa(ano, mes, dia);
    *dia += 60;

    if (*dia > 31) {
        *mes += 1;
        *dia -= 31;
    }
}

int main() {
    int ano, mes, dia;

    printf("Digite o ano em que deseja saber quando sera a pascoa: ");
    scanf("%4d", &ano);

    pascoa(ano, &mes, &dia);
    printf("\nA pascoa caira em %02d/%02d\n\n", dia, mes);

    sextaFeiraSanta(ano, &mes, &dia);
    printf("Sexta-feira Santa caira em %02d/%02d\n", dia, mes);

    tercaCarnaval(ano, &mes, &dia);
    printf("Terca-feira de Carnaval caira em %02d/%02d\n", dia, mes);

    corpusChristi(ano, &mes, &dia);
    printf("Corpus Christi caira em %02d/%02d\n", dia, mes);

    return 0;
}
