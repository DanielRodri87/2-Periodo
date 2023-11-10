#include <stdio.h>


void pascoa() {
    int ano;

    printf("Digite o ano em que deseja saber quando sera a pascoa: ");
    scanf("%4d", &ano);

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

    // Soldado
    int dia = ((H + L - 7 * M + 114) % 31) + 1;
    int mes = (H + L - 7 * M + 114) / 31;

    // Soldado
    printf("\nA pascoa caira em %02d/%02d\n\n", mes, dia);
}

int main() {
    pascoa();
    return 0;
}

