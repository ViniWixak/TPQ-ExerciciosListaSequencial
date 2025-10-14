#include <stdio.h>

int main(){
    int numero, *ptrNumero;
    
    ptrNumero = &numero;

    numero = 10;

    printf("\n\nEndereco de numero: %d", &numero);
    printf("\n\nEndereco de ptrNumero: %d", &ptrNumero);
    printf("\n\nvalor de numero: %d", numero);
    printf("\n\nvalor de ptrNumero: %d", ptrNumero);

    //desreferenciação
    printf("\n\nValor apontado por ptrNumero %d", *ptrNumero);

    return 0;
}