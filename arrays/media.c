//Média dos Elementos:
//Escreva um programa que leia 8 números inteiros, armazene-os em um array, calcule e
//imprima a média dos valores armazenados.

#include <stdio.h>

int main () {
    int numerosInteiros[8], soma = 0;
    float media;

    for(int i = 0; i < 8; i++ ){
        printf("Informe o numero %d\n", i + 1);
        scanf("%d", &numerosInteiros[i]);
    }

    for(int i = 0; i < 8; i++) {
        soma = numerosInteiros[i] + soma;
    }

    media = soma / 8;

    printf("\n\nA media eh: \n%.2f", media);

    return 0;
}