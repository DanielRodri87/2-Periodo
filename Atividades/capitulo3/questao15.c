// Desenvolva um porgrama que para auxiliar o controle de venda do Posto Monteiro

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// login
// cadastro
// abastecer
// receber combustivel
// consultar bombas
char senha[8] = "admin", usuario[50] = "admin";
int sair = 0;

void cadastrar()
{
    printf("Digite seu usuario e senha: ");
    scanf("%c %c",usuario, senha);
    return;
}
void login()
{
    printf("Usuário: %s\nSenha: %s\n", usuario, senha);
    return;
}
int main()
{
    do {
        printf("Seja bem-vindo ao Sistema do Posto Monteiro!!\n\n");
        int controle;
        printf("Sua primeira vez aqui? 1 - Sim | 2 - Nao: ");
        scanf("%d", &controle);
        switch (controle)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            login();
            break;
        default:
            break;
        }
    } while (sair!=0);
    

    return 0;
}