#include <stdio.h>

/*
Escreva uma função chamada trocar que receba dois ponteiros para inteiros e
troque os valores entre eles. No main, declare duas variáveis inteiras, leia
os valores do usuário, chame a função trocar e mostre os novos valores após
a troca.
*/

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    trocar(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
