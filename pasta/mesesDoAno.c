/*
5 – Criar um algoritmo em C que leia um número inteiro entre 1 e 12 e
escreva o mês correspondente. Caso o usuário digite um número fora desse intervalo,
deverá aparecer uma mensagem informando que não existe mês com este número.
*/

#include <stdio.h>

int main() {
    int mesDoAno;

    printf("\n\nDigite um numero de 1 a 12:\n");
    scanf("%d", &mesDoAno);

    switch (mesDoAno){
        case 1: 
            printf("\n\nJaneiro\n");
            break;
        case 2: 
            printf("\n\nFevereiro\n");
            break;
        case 3: 
            printf("\n\nMarco\n");
            break;
        case 4: 
            printf("\n\nAbril\n");
            break;
        case 5: 
            printf("\n\nMaio\n");
            break;
        case 6: 
            printf("\n\nJunho\n");
            break;
        case 7: 
            printf("\n\nJulho\n");
            break;
        case 8: 
            printf("\n\nAgosto\n");
            break;
        case 9: 
            printf("\n\nSetembro\n");
            break;
        case 10: 
            printf("\n\nOutubro\n");
            break;
        case 11: 
            printf("\n\nNovembro\n");
            break;
        case 12: 
            printf("\n\nDezembro\n");
            break;
        default: 
            printf("\n\nOpcao invalida\n");
            break;
    }

    return 0;
}