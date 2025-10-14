//Faça um algoritmo que peça ao usuário para digitar números positivos 
//e imprima a média desses números até que o usuário digite um número negativo.

#include <stdio.h>

int main () {
    int numero = 0, totalTermos = -1;
    float media = 0, somaDosNumeros = 0;

    while (numero >= 0 ){
        somaDosNumeros = somaDosNumeros + numero;
        totalTermos = totalTermos + 1;
        printf("\ntotalde termos: %d", totalTermos);
        printf("\nInforme um numero: \n");
        scanf("%d", &numero);
    }
        media = somaDosNumeros / totalTermos;
        printf("A media dos numeros eh: %.2f", media);

    return 0;
}
