#include <stdio.h>

void trocar(int *ptrArray1,int *ptrArray2, int tamanho){
    int aux;
    for(int i = 0; i < tamanho; i++){
        aux = *(ptrArray1 + i);
        *(ptrArray1 + i) = *(ptrArray2 + i);
        *(ptrArray2 + i) = aux;
    }
}

int main(){
    int arrayUm[5] = {2 , 93, 15, 52, 44};
    int arrayDois[5] = {38 , 6, 47, 28, 11};
    int *ptrDoPrimeiroArray, *ptrDoSegundoArray;

    ptrDoPrimeiroArray = arrayUm;
    ptrDoSegundoArray = arrayDois;

    trocar(ptrDoPrimeiroArray, ptrDoSegundoArray, 5);

    printf("\nArray Um:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", arrayUm[i]);
    }

    printf("\nArray Dois:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", arrayDois[i]);
    }

}

