#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int vetor[10];
    int tamanho;
} Vetor;

// Todas as funções agora recebem ponteiros para Vetor
int soma(const Vetor *principal) {
    int soma = 0;
    for (int i = 0; i < principal->tamanho; i++) {
        soma += principal->vetor[i];
    }
    return soma;
}

int produto(const Vetor *principal) {
    int produto = 1; 
    for (int i = 0; i < principal->tamanho; i++) {
        produto *= principal->vetor[i];
    }
    return produto;
}

float media(const Vetor *principal) {
    if (principal->tamanho == 0) return 0;
    return (float) soma(principal) / principal->tamanho;
}

int maior(const Vetor *principal) {
    int max = principal->vetor[0];
    for (int i = 1; i < principal->tamanho; i++) {
        if (principal->vetor[i] > max) {
            max = principal->vetor[i];
        }
    }
    return max;
}

int menor(const Vetor *principal) {
    int min = principal->vetor[0];
    for (int i = 1; i < principal->tamanho; i++) {
        if (principal->vetor[i] < min) {
            min = principal->vetor[i];
        }
    }
    return min;
}

int menu() {
    int opcao;
    printf("\n[1] - Soma dos elementos\n");
    printf("[2] - Produto dos elementos\n");
    printf("[3] - Média dos elementos\n");
    printf("[4] - Maior valor\n");
    printf("[5] - Menor valor\n");
    printf("[0] - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {
    Vetor principal;
    int operacao;
    
    printf("Digite o tamanho do vetor (máximo 10): ");
    scanf("%d", &principal.tamanho);

    if (principal.tamanho > 10 || principal.tamanho <= 0) {
        printf("Tamanho inválido!\n");
        return 1;
    }

    for (int i = 0; i < principal.tamanho; i++) {
        printf("Digite o número na posição [%d]: ", i + 1);
        scanf("%d", &principal.vetor[i]);
    }

    while (true) {
        operacao = menu();

        switch (operacao) {
            case 1:
                printf("Soma: %d\n", soma(&principal));
                break;
            case 2:
                printf("Produto: %d\n", produto(&principal));
                break;
            case 3:
                printf("Média: %.2f\n", media(&principal));
                break;
            case 4:
                printf("Maior valor: %d\n", maior(&principal));
                break;
            case 5:
                printf("Menor valor: %d\n", menor(&principal));
                break;
            case 0:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }
}
