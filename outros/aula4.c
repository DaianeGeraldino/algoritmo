#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    /*
    Calculadora
    */
    int operacao;
	float numero1, numero2, resultado;
	
	printf("***MENU***\n");
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n");
	printf("4 - Dividir\n");
	
	printf("Informe a operacao que deseja realizar: ");
	scanf("%d", &operacao);
	
	printf("Me informe o primeiro numero: ");
	scanf("%f", &numero1);
	printf("Me informe o segundo numero: ");
	scanf("%f", &numero2);
	
	//opercao = 2
	
	if(operacao == 1){
		
		resultado = numero1 + numero2;
		
	} else if(operacao == 2){
		
		resultado = numero1 - numero2;
		
	} else if(operacao == 3){
		
		resultado = numero1 * numero2;
		
	} else if(operacao == 4){
		
		if(numero2 != 0){
			
			resultado = numero1 / numero2;
			
		} else{
			
			printf("Erro! Nao existe divisao por zero!\n");
			exit(1);
		}
		
	} else{
		
		printf("Voce eh um mane. Digitou uma operacao que nao existe! Otario!\n");
		exit(2);
	}
	
	printf("Resultado = %.2f\n", resultado);

    /*
	reprovacao por falta
	- frequencia for menor que 75% => reprovado por falta
	
	reprovacao por nota
	- se sua nota for maior ou igual a 6.0 => aprovado!
	- se sua nota for menor que 6.0 e maior ou igual 
	  a 2.0 => exame final
	  - se sua nota do exame final for maior ou igual
	  10 - nota => aprovado
	  - senao => reprovado por nota
	- se sua nota for menor que 2.0 => reprovado por nota
	
	usuario deve informar a frequencia em %
	e a nota. se for para a final, deve informar
	a nota do exame final.
	*/
    
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
