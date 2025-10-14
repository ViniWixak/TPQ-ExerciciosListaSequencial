//Construa uma função que troque o valor de duas variaveis

#include <stdio.h>

void trocaValores(int *ptrNum1, int *ptrNum2){
    int aux;
    aux = *ptrNum1; 
    *ptrNum1 = *ptrNum2; 
    *ptrNum2 = aux; 
}


int main(){
    int x = 15, y = 28, *ptrUm, *ptrDois;

    ptrUm = &x;
    ptrDois = &y;


    x = 50; 


    trocaValores(&x, ptrDois);


    printf("\nX: %d / Y: %d", x, y);
}



