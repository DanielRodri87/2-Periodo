#include <stdio.h>

#define MAX_ALUNOS 50
#define MAX_NOTAS 3

struct Aluno {
    int matricula;
    float notas[MAX_NOTAS];
    float media;
};

int obterNumeroAlunos() {
    int n;
    printf("Informe o número de alunos: ");
    scanf("%d", &n);
    return n;
}

void digitarNotas(struct Aluno alunos[], int numAlunos) {
    for (int i = 0; i < numAlunos; i++) {
        printf("Matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < MAX_NOTAS; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }

        float soma = 0;
        for (int j = 0; j < MAX_NOTAS; j++) {
            soma += alunos[i].notas[j];
        }
        alunos[i].media = soma / MAX_NOTAS;

        printf("Média do aluno %d: %.2f\n", i + 1, alunos[i].media);
    }

}

void atualizarNotas(struct Aluno alunos[], int numAlunos) {
    int matricula;
    printf("Digite a matrícula do aluno a ser atualizado: ");
    scanf("%d", &matricula);

    int indice = -1;
    for (int i = 0; i < numAlunos; i++) {
        if (alunos[i].matricula == matricula) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        printf("Digite as novas notas do aluno:\n");
        for (int j = 0; j < MAX_NOTAS; j++) {
            printf("Nova nota %d: ", j + 1);
            scanf("%f", &alunos[indice].notas[j]);
        }

        float soma = 0;
        for (int j = 0; j < MAX_NOTAS; j++) {
            soma += alunos[indice].notas[j];
        }
        alunos[indice].media = soma / MAX_NOTAS;

        printf("Nova média do aluno %d: %.2f\n", indice + 1, alunos[indice].media);
    } else {
        printf("Aluno com matrícula %d não encontrado.\n", matricula);
    }
}

int main() {
    struct Aluno alunos[MAX_ALUNOS];
    int numAlunos;

    numAlunos = obterNumeroAlunos();

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Digitação de notas\n");
        printf("2. Atualização de Notas\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                digitarNotas(alunos, numAlunos);
                break;
            case 2:
                atualizarNotas(alunos, numAlunos);
                break;
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
