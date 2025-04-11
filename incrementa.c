#include <stdio.h>
#include <stdbool.h>

int main() {
	int vetor[4] = {10, 20, 30, 40};
	int *p = vetor;
	
	printf("Valor do *p: %d\n", *p);
	
	p++;
	printf("Depois do p++, valor do *p: %d\n", *p);
	
	*p++; //nesse caso precedencia de sinal o ++ aumenta o index
	printf("Depois do p++, valor do *p: %d\n", *p);
	
	++*p; //como o ++ ta na frente vai incrementar primeiro ai da 31
	printf("Depois do p++, valor do *p: %d\n", *p);
	
	return 0;
}
