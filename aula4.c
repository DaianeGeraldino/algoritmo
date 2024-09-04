#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){

    float nota, notaFinal, calculo;
    int frequencia;

    printf("Digite sua frequencia: ");
    scanf("%d", &frequencia);

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if(frequencia<75){
        printf("Reprovado por falta");
    } else if (nota>=6){
        printf("Aprovado");
    } else if (nota<2){ 
        printf("Reprovado");
    } else if (nota<6) {

        printf("Voce esta de exame final! \n");
        printf("Digite a nota do exame final: ");
        scanf("%f", &notaFinal);

        calculo = 10-notaFinal;

        if(calculo>=notaFinal){
            printf("Aprovado com %.2f", calculo);
        } else {
            printf("Reprovado, necessario %.2f para passar \n", calculo);
        }
    }

    return 0;
}