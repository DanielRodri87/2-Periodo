#include <stdio.h>
#include <string.h>
void justify(char str[], int modo, int n) {
    int length = strlen(str);
    int espacos, espacosInicio, espacosFim;
    if (n <= length) {
        return;
    }
    switch (modo) {
    case 0:
        espacos = n - length;
        str[length] = '\0';
        while (espacos > 0) {
            str[length] = ' ';
            length++;
            espacos--;
    }
    break;
    case 1:
        espacosInicio = (n - length) / 2;
        espacosFim = n - length -
        espacosInicio;
        memmove(str + espacosInicio, str,
        length);
        for (int i = 0; i < espacosInicio;
            i++) {
            str[i] = ' ';
        }
        for (int i = length + espacosInicio;
            i < n; i++) {
            str[i] = ' ';
        }
        break;
    case 2:
        espacos = n - length;
        str[n] = '\0';
        while (length >= 0) {
            str[length + espacos] =
            str[length];
            length--;
        }
        while (espacos > 0) {
            str[espacos - 1] = ' ';
            espacos--;
        }
        break;
    default:
    printf("Modo de justificação inválido.\n");
    }
}
int main() {
    char minhaString[] = "Justificar";
    int modo = 1;
    int tamanhoDesejado = 20;
    justify(minhaString, modo, tamanhoDesejado);
    printf("String justificada: \"%s\"\n",
    minhaString);
    return 0;
}
