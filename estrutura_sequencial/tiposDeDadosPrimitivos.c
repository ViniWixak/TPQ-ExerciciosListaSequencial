#include <stdio.h>

int main(){
    int numero1, numero2, resultadoDivisao, resultadoResto;


    printf("\nInforme um numero:\n");
    scanf("%d", &numero1);

    printf("\nInforme outro numero:\n");
    scanf("%d", &numero2);

    resultadoDivisao = numero1 / numero2;
    resultadoResto = numero1 % numero2;

    printf("\n\nO Resultado da divisao eh %d", resultadoDivisao);
    printf("\n\nO Resultado do resto da divisao eh %d", resultadoResto);

    return 0;
}