//Crie um algoritmo que solicite ao usuário um número e imprima a tabuada desse número de 1 a 10.

#include <stdio.h>

int main(){
    int contador = 0, numero, resultado;

    printf("\nDigite um numero: \n");
    scanf("%d", &numero);

    printf("\nA tabuada do numero %d eh", numero);
    while (contador <= 10)
    {
        resultado = contador * numero;
        printf("\n%d * %d = %d", contador, numero, resultado);
        contador = contador + 1;
    }
    return 0;
}