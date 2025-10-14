//Encontrar o Maior e o Menor Elemento:
//Crie um programa que leia 10 números inteiros e armazene-os em um array. 
//Em seguida, encontre e imprima o maior e o menor número presente nesse array.

#include <stdio.h>

int main() {
    int numeros[10], menorNumero, maiorNumero;

    for (int i = 0; i < 10; i++) {
        printf("Informe o numero %d\n", i + 1);
        scanf("%d", &numeros[i]);
    }

    menorNumero =  numeros[0];
    maiorNumero = numeros[0];

    for(int i = 0; i < 10; i++){
        printf("\n%d", numeros[i]);
    }

    for (int i = 1; i < 10; i++){
        if (menorNumero > numeros[i]) {
            menorNumero = numeros[i];
        }
    }

    for (int i = 1; i < 10; i++){
        if(maiorNumero < numeros[i]){
            maiorNumero = numeros[i];
        }
    }

    printf("\nO menor numero eh: %d",  menorNumero);
    printf("\nO maior numero eh: %d",  maiorNumero);


    return 0;
}