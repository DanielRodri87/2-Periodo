/*Treinamento em Linguagem C - Victorine Viviane Mizrahi

  Capítulo 5 - Funcoes

  Exercício 44: Pascoa: Escreva uma funcao que receba um ano como argumento e retorne o dia e o mes
  (mmdd) em que cai o feriado da pascoa. O algoritmo e' o seguinte:

  A = Ano % 19;
  B = Ano / 100;
  C = Ano % 100;
  D = B / 4;
  E = B % 4;
  F = (B + 8) / 25;
  G = (B - F + 1) / 3;
  H = (19 * A + B - D - G + 15) % 30;
  I = C / 4;
  K = C % 4;
  L = (32 + 2 * E + 2 * I - H - K) % 7;
  M = (A + 11 * H + 22 * L) / 451;
  Mes = (H + L - 7 * M + 114) / 31; [3 = Março, 4 = Abril]
  Dia = ((H + L - 7 * M + 114) % 31) + 1;


  Reposta comentada em: 
  Mais exercícios em: http://exata0mente.blogspot.com/

*/

#include <stdio.h>

void solicita_dado (void); /*Soldado*/
int recebe_ano(void); /*Soldado*/
int calcula_pascoa_dia(int); /*Soldado*/
int calcula_pascoa_mes(int); /*Soldado*/
void mostra_dia_mes_pascoa(int, int); /*Soldado*/
void pascoa(void);

int main(){ /*Coronel*/

    pascoa();

return 0;
}

void pascoa(){

    int ano;

    solicita_dado();
    ano = recebe_ano();
    mostra_dia_mes_pascoa(calcula_pascoa_dia(ano), calcula_pascoa_mes(ano));

}

int recebe_ano(){

    int ano;
    scanf("%4d", &ano);

return ano;
}

int calcula_pascoa_dia(int Ano){

    int Dia, A, B, C, D, E, F, G, H, I, K, L, M;

    A = Ano % 19;
    B = Ano / 100;
    C = Ano % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = (19 * A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2 * E + 2 * I - H - K) % 7;
    M = (A + 11 * H + 22 * L) / 451;
    /*Mes = (H + L - 7 * M + 114) / 31;*/
    Dia = ((H + L - 7 * M + 114) % 31) + 1;

return Dia;
}

int calcula_pascoa_mes(int Ano){

    int Mes, A, B, C, D, E, F, G, H, I, K, L, M;

    A = Ano % 19;
    B = Ano / 100;
    C = Ano % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = (19 * A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2 * E + 2 * I - H - K) % 7;
    M = (A + 11 * H + 22 * L) / 451;
    Mes = (H + L - 7 * M + 114) / 31;
    /*Dia = ((H + L - 7 * M + 114) % 31) + 1;*/

return Mes;
}

void mostra_dia_mes_pascoa(int dia, int mes){

    printf("\nA pascoa caira em %02d/%02d\n\n", mes, dia);

}

void solicita_dado(){

    printf("Digite o ano em que deseja saber quando sera a pascoa: ");

}
