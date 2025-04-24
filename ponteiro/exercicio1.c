#include <stdio.h>
#include <string.h>

/*
Crie uma estrutura chamada Aluno com os campos nome
(string de até 40 caracteres), nota1 e nota2 (do tipo float).
Em seguida, escreva uma função que receba um ponteiro
para essa estrutura, calcule a média das notas e retorne essa média.
No main, declare um Aluno, leia seus dados, chame a função
e exiba o nome e a média.
*/


typedef struct {
    char nome[40];
    float nota1;
    float nota2;
} Aluno;

float media(Aluno *aluno) {
    return (aluno->nota1 + aluno->nota2) / 2;
}

int main() {
    Aluno aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);

    printf("Digite a nota 1: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &aluno.nota2);

    float resultadoMedia = media(&aluno);

    printf("Nome: %s", aluno.nome);
    printf("Media: %.2f\n", resultadoMedia);

    return 0;
}
