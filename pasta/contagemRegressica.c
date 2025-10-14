// Escreva um programa que faz uma contagem regressiva de 10 a 0 e imprime "Feliz Ano Novo!" no final.


#include <stdio.h>

int main(){
    int variavelControle = 10;

    while(variavelControle > 0) {
        printf("\n%d", variavelControle);
        variavelControle --; // variavelControle = variavelControle - 1
    }

    printf("\n\nFeliz ano novo!\n");

    return 0;
}