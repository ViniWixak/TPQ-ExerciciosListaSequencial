 #include <stdio.h>

#include <stdio.h>
int main(){
    float numero1, numero2, resultadoDivisao; 
    int resultadoResto;


    printf("\nInforme um numero:\n");
    scanf("%f", &numero1);

    printf("\nInforme outro numero:\n");
    scanf("%f", &numero2);

    resultadoDivisao = numero1 / numero2;
    resultadoResto = numero1 % numero2;

    printf("\n\nO Resultado da divisao eh %f", resultadoDivisao);
    printf("\n\nO Resultado do resto da divisao eh %d", resultadoResto);

    return 0;
}