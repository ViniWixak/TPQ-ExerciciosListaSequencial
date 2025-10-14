#include <stdio.h>

int main(){
    int resultadoSoma, valorInteiroQualquer = 10, restoDaDivisao, outroValor = 7;
    char letra;
    float numeroComVirgula;
    
    resultadoSoma = 2 + 2;
    letra = 'A';
    numeroComVirgula = 17.64568989;

    numeroComVirgula = 5 / 2;
    restoDaDivisao = 5 % 2;

    resultadoSoma = 4 + 4;
    
    valorInteiroQualquer = valorInteiroQualquer + 1;
    valorInteiroQualquer ++;

    outroValor = outroValor - 1;
    outroValor --;

    printf("\nValor da variavel soma: %d\n", resultadoSoma);
    printf("\nValor da variavel valorInteiroQualquer: %d\n", valorInteiroQualquer);
    printf("\nValor da variavel outroValor: %d\n", outroValor);
    printf("\nValor da variavel restoDaDivisao: %d\n", restoDaDivisao);
    printf("\nValor da variavel letra: %c\n", letra);
    printf("\nValor da variavel numeroComVirgula: %f\n", numeroComVirgula);

    return 0;
}