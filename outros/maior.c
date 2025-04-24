/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float num1, num2, num3;
    float menorNum, medioNum, maiorNum;
    
    printf("Digite o primeiro numero ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero ");
    scanf("%f", &num2);
    
    printf("Digite o terceiro  numero ");
    scanf("%f", &num3);
    
    if(num1>num2 && num1>num3){
        maiorNum=num1;
        if(num2>num3){
            medioNum=num2;
            menorNum=num3;
        } else{
            medioNum=num3;
            menorNum=num2;
        }
    }
    
    if(num2>num1 && num2>num3){
        maiorNum=num2;
        if(num1>num3){
            medioNum=num1;
            menorNum=num3;
        } else{
            medioNum=num3;
            menorNum=num1;
        }
    }

    if(num3>num2 && num3>num2){
        maiorNum=num3;
        if(num2>num1){
            medioNum=num2;
            menorNum=num1;
        } else{
            medioNum=num1;
            menorNum=num2;
        }
    }
    
    printf("A ordem eh %.2f %.2f %.2f ", menorNum, medioNum, maiorNum);




    return 0;
}
