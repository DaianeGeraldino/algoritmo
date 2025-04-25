/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- Crie um struct aluno com nome, matricula, 3 notas e media
- Crie uma funcao para solicitar a quantidade de aluno que o usuario deseja
- Criar uma funcao que gera a media do aluno
- Criar uma funcao para determinar se esta aprovado if(media < 2) reprovado
if(media>2 || media<7) final else aprovado
- Aparece no final:
Nome:
Matrícula:
Média:
Aprovado/Reprovado
*/

typedef struct{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;
} Aluno;

float mediaAluno(Aluno aluno, int quant){
    int i;
    for(i = 0; i< quant; i++){
        return aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3;
    }
    
}

void quantidade(){
    int quant;
    
    printf("Digite a quantidade de aluno que deseja cadastrar: ");
    scanf("%d", &quant);
}

void talvezFinal(){
    in mediaAluno();
    
    if(media < 2){
        reprovado
    } else if (media > 2 || media < 7 ){
        recuperacao
    } else {
        aprovado
    }
    
}

void mostrarAluno(){
    
}

int main() {
    Aluno aluno;
    quantidade();
    int i;
    
    for(i = 0; i < quant; i++){
        printf("Digite o nome do aluno: \n");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strcspn(alunos[i].nome, "\n") = '\0'];
        
        printf("Digite a matricula: \n");
        scanf("%d", &aluno[i].matricula);
        
        printf("Digite a nota 1: \n");
        scanf("%f", &aluno[i].nota1);
        
        printf("Digite a nota 1: \n");
        scanf("%f", &aluno[i].nota2);
        
        printf("Digite a nota 1: \n");
        scanf("%f", &aluno[i].nota3);
        
    }

    
}
