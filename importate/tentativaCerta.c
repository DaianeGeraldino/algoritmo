#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;
} Aluno;

float calcularMedia(Aluno aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
}

const char* verificarSituacao(float media) { // const char* = string imutavel
    if (media < 2)
        return "Reprovado";
    else if (media < 7)
        return "Recuperação";
    else
        return "Aprovado";
}

int main() {
    
    int quantidade, i;

    printf("Digite a quantidade de alunos: \n");
    scanf("%d", &quantidade);
    getchar();
    
    Aluno alunos[quantidade];


    for (i = 0; i < quantidade; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);

        getchar(); 

        alunos[i].media = calcularMedia(alunos[i]);
    }

    printf("\n--- Resultados ---\n");
    for (i = 0; i < quantidade; i++) {
        printf("\nNome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Média: %.2f\n", alunos[i].media);
        printf("Situação: %s\n", verificarSituacao(alunos[i].media));
    }

    return 0;
}
