#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  /*
  Exercicio 1: Calcule a hipotenusa de um triangulo.
	O usuario devera informar os valores dos dois catetos.
	*/
    
  float hipotenusa, catetoOposto, catetoAdjacente;
    
  printf("Digite o Cateto Oposto do triangulo\n");
  scanf("%f", &catetoOposto);
    
  if(catetoOposto <= 0){
    printf("Nao existe cateto Oposto negativo\n");
    return 1;
  }
    
  printf("Digite o Cateto Adjacente do triangulo\n");
  scanf("%f", &catetoAdjacente);
    
  if(catetoAdjacente <= 0){
    printf("Nao existe cateto Oposto negativo\n");
    return 1;
  }
    
  hipotenusa = sqrt((pow(catetoOposto,2)) + (pow(catetoAdjacente,2)));
    
  printf("O resultado final e %2.f\n", hipotenusa);
    
  /*
    Exercicio 2: Calcule a conversao de Reais para Dolares.
  	O usuario deve informar a cotacao do Dolar e o valor
  	que quer converter em Reais.
	*/
	
  float dolar, real, cotacaoDolar;
    
  printf("Digite a cotacao do dolar atual\n");
  scanf("%f", &cotacaoDolar);
    
  printf("Digite qual valor que deseja converter para reais\n");
  scanf("%f", &real);
    
  dolar = real / cotacaoDolar;
    
  printf("A conversao deu %2.f \n", dolar);
    
  /*
    Exercicio 3: Converta graus Celcius para graus Fahrenheit.
	  O usuario deve informar a temperatura em graus Celcius
	  e o programa deve calcular o valor em Fahrenheit.
	*/
	
  float grausCelsius, grauFahrenheit;
    
  printf("Digite qual grau em celsius que deseja converter em grau Fahrenheit\n");
  scanf("%f", &grausCelsius);
    
  grauFahrenheit = (grausCelsius * 1.8) + 32;
    
  printf("O valor convertido para o grau Fahrenheit eh %2.f\n", grauFahrenheit);
    
  return 0;
}
