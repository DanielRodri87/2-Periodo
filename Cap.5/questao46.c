#include <stdio.h>

int calcularDiaPascoa(int ano) {
    int A, B, C, D, E, F, G, H, I, K, L, M;

    A = ano % 19;
    B = ano / 100;
    C = ano % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = (19 + A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2 * E + 2 * I - H - K) % 7;
    M = (A + 11 * H + 22 * L) / 451;

    return ((H + L - 7 * M + 114) % 31) + 1;
}

void calcularPascoa(int ano, int *mes, int *dia) {
    int A, B, C, D, E, F, G, H, I, K, L, M;

    A = ano % 19;
    B = ano / 100;
    C = ano % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = (19 + A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2 * E + 2 * I - H - K) % 7;
    M = (A + 11 * H + 22 * L) / 451;

    *mes = (H + L - 7 * M + 114) / 31;
    *dia = ((H + L - 7 * M + 114) % 31) + 1;
}

void imprimirCalendario(int ano) {
    int mes, dia, diaSemana, numDias;

    calcularPascoa(ano, &mes, &dia);
    diaSemana = calcularDiaPascoa(ano);

    printf("Calendário de %d\n\n", ano);

    for (mes = 1; mes <= 12; mes++) {
        printf("%s\n", mes == 1 ? "Janeiro" : mes == 2 ? "Fevereiro" : mes == 3 ? "Março" : mes == 4 ? "Abril" : mes == 5 ? "Maio" : mes == 6 ? "Junho" : mes == 7 ? "Julho" : mes == 8 ? "Agosto" : mes == 9 ? "Setembro" : mes == 10 ? "Outubro" : mes == 11 ? "Novembro" : "Dezembro");
        printf("Dom Seg Ter Qua Qui Sex Sab\n");

        for (diaSemana = 0; diaSemana < calcularDiaPascoa(ano); diaSemana++) {
            printf("    ");
        }

        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            numDias = 30;
        } else if (mes == 2) {
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                numDias = 29; 
            } else {
                numDias = 28;
            }
        } else {
            numDias = 31;
        }

        for (dia = 1; dia <= numDias; dia++) {
            printf("%3d ", dia);
            diaSemana = (diaSemana + 1) % 7;
            if (diaSemana == 0) {
                printf("\n");
            }
        }
        printf("\n");
    }
}

int main() {
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    imprimirCalendario(ano);

    return 0;
}
