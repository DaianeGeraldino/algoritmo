// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    /* Exercicio 1*/
    float km, m, mph;
    
    printf("Digite o valor da quilometragem que deseja converter: ");
    scanf("%f", &km);
    
    m = km/3.6;
    mph = km*0.621371;
    
    printf("O valor de km/s para m/s e igual a: %.2f \n", m);
    printf("O valor de km/s para Mph e igual a: %.2f \n", mph);
    
    /* Exercicio 2*/
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("%d eh um ano bissexto.\n", ano);
	} else{
		printf("%d não eh um ano bissexto.\n", ano);
	}
    
    /* Exercicio 3 */
    float a, b, c, delta, x, y, raiz;
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);
    
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    delta = (pow(b,2))-(4*a*c);
    
    if(delta<0){
        printf("equacao nao possui raízes reais\n");
    } else {
        raiz = sqrt(delta);
        x = (-b+raiz)/(2*a);
        y = (-b-raiz)/(2*a);
        printf("As raizes sao: x1 = %.2f e x2 = %.2f", x, y);
    }
    
    return 0;
}
