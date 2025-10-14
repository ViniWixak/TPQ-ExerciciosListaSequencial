// Escreva um programa que usa a estrutura 'while' para imprimir todos os números pares de 0 a 20.
// E multiplicar os numeros impares e exibir o resultado
#include <stdio.h>

int main() {
    int numero = 0, resultado = 1;

    while(numero <= 20){
        if(numero % 2 == 0) {
            printf("\n%d", numero);
        }else {
            resultado = numero * resultado;
            printf("\nResultado parcial: %d", resultado);
        }
        numero ++;
    }

    printf("\nResultado final: %d", resultado);

    return 0;
}