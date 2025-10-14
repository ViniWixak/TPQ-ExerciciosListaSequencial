/*Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os
em ordem decrescente*/

#include <stdio.h>

int main(){
    int a, b, c, menor, intermediario, maior;

    printf("\n\nInforme o primeiro valor: ");
    scanf("%d", &a);
    printf("\n\nInforme o segundo valor: ");
    scanf("%d", &b);
    printf("\n\nInforme o terceiro valor: ");
    scanf("%d", &c);

     if (a == b || a == c || b == c) {
        printf("Não se pode digitar números iguais");
    }

    if (a < b && a < c) {
        menor = a;
        if (b < c) {
            maior = c;
            intermediario = b;
        } else {
            maior = b;
            intermediario = c;
        }
    } else if (b < c && b < a){
        menor = b;
        if (c < a) {
            maior = a;
            intermediario = c;
        } else {
            maior = c;
            intermediario = a;
        }
    } else if (c < a && c < b) {
        menor = c;
        if (a < b) {
            maior = b;
            intermediario = a;
        } else {
            maior = a;
            intermediario = b;
        }
    }
    
    printf("\n\n%d\n%d\n%d", maior, intermediario, menor);

    return 0;
}