/*
8 – Soma ou produto:
Faça um algoritmo que leia dois valores inteiros A e B se os valores forem
iguais deverá se somar os dois, caso contrário multiplique A por B. Ao final de
qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e mostrar
seu conteúdo na tela.
*/

#include <stdio.h>

int main() {

    int A, B, C; 

    printf("\n\nDigite o valor de A: ");
    scanf("%d", &A);
    printf("\n\nDigite o valor de B: ");
    scanf("%d", &B);

    if (A == B) {
        C = A + B;
        printf("\n\nResultado de A + B = %d", C);
    } else {
        C = A * B;
        printf("\n\nResultado de A * B = %d", C);

    }

    return 0;
}