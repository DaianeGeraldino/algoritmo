#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Crie uma função que gere um numero de 0 a 10, e depois faça o fatorial dele 
*/

int fatorial(int numero){
    if (numero == 1 || numero == 0){
        return 1;
    }
    
    return numero * fatorial(numero - 1);
}

int main()
{
    srand(time(NULL));
    int numeroAleatorio = rand() % 10 + 1;
    
    printf("O fatorial do numero %d e: %d", numeroAleatorio, fatorial(numeroAleatorio));

    return 0;
}
