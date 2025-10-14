#include <stdio.h>

int somarNumeros(){
    int somatorio = 0, contador = 0;
    while(contador <= 10) {
        somatorio = somatorio + contador;
        printf("\nContador %d", contador);
        contador = contador + 1;
    }
    return somatorio;
}

int main() {
    int soma = somarNumeros();
    printf("\n\nA soma de 0 a 10 vale: %d", soma);
    return 0;
}