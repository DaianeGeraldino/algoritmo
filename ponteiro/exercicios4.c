/*
Crie um programa que armazene até 5 produtos. Cada produto tem nome, preço e quantidade. Use alocação dinâmica (malloc) para armazenar os produtos. Crie uma função que:

Receba um ponteiro para o array de structs,

Calcule o valor total do estoque,

Retorne o produto mais caro por valor total (preço * quantidade).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int valorTotalEstoque(Produto *produto, int n) {
    int i, total = 0;
    
    for (i = 0; i < n; i++) {
        total += produto[i].preco * produto[i].quantidade;
    }
    
    return total;
}

void produtoMaisCaro(Produto *produto, int n) {
    int i, indiceMaisCaro = 0;
    float maiorValor = produto[0].preco * produto[0].quantidade;

    for (i = 1; i < n; i++) {
        float valorAtual = produto[i].preco * produto[i].quantidade;
        if (valorAtual > maiorValor) {
            maiorValor = valorAtual;
            indiceMaisCaro = i;
        }
    }

    printf("O produto mais caro em valor de estoque é: %s\n", produto[indiceMaisCaro].nome);
}

int main() {
    int i, n = 5;
    Produto *produto = (Produto *)malloc(n * sizeof(Produto));

    if (produto == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite o nome do produto %d: ", i + 1);
        fgets(produto[i].nome, sizeof(produto[i].nome), stdin);
        produto[i].nome[strcspn(produto[i].nome, "\n")] = '\0';

        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &produto[i].preco);

        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &produto[i].quantidade);

        getchar(); // Limpa o \n do buffer
    }

    int total = valorTotalEstoque(produto, n);
    printf("\nValor total do estoque: R$ %d\n", total);

    produtoMaisCaro(produto, n);

    free(produto);
    return 0;
}
