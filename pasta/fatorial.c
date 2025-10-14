// Escreva um programa que calcula o fatorial de um número inteiro positivo inserido pelo usuário.

#include <stdio.h>

int main () {
    int numero, resultadoFatorial = 1;

    printf("\nDigite um numero: \n");
    scanf("%d", &numero);


    do {
        printf ("\nResultado fatorial: %d * %d = %d", numero, resultadoFatorial, (numero * resultadoFatorial));
        resultadoFatorial = resultadoFatorial * numero;
        numero --;
    }while(numero > 0);
    
    if(numero < 0){
        printf("Informe um valor maior que zero");
    }

    return 0;
}


