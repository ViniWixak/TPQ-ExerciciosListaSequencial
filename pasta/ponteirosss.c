#include <stdio.h>

/*int dobro(int numero){
    return numero * 2;
}*/

void dobro(int *ptrNumero){ // ptrNumero = 578812608 / *ptrNumero = 10
    printf("\n\n%d", *ptrNumero);
    return *ptrNumero = *ptrNumero * 2;
}


int main(){
    int numero, *ptr;

    ptr = &numero; 
    printf("\n\nInforme um numero: "); 
    scanf("%d", &numero); // &numero = 578812608 / numero = 10

    dobro(ptr);

    printf("\nValor Numero: %d", numero);
    
    return 0;
}


// Lista
// lista encadeada
// lista duplamente encadeada
// fila 