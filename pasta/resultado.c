/*
4- Aprovado:
Escreva um programa que, com base nas notas de um aluno em três
disciplinas, indique se ele foi aprovado (média maior ou igual a 6) ou reprovado.
*/

#include <stdio.h>

int main () {

    float nota1, nota2, nota3, media;

    printf("\n\nDigite a nota da primeira diciplina: \n\n");
    scanf("%f", &nota1);
    printf("\n\nDigite a nota da segunda diciplina: \n\n");
    scanf("%f", &nota2);
    printf("\n\nDigite a nota da terceira diciplina: \n\n");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 6) {
        printf("\n\nVoce foi aprovado \nMedia: %.2f", media);
    } else {
        printf("\n\nVoce foi reprovado \nMedia: %.2f", media);
    }

    while (nota1 < 10) {
        
    }

    return 0;
}