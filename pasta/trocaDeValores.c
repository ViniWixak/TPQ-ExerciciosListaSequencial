#include <stdio.h>

void trocaValor(int *a, int *b){ // a = 312312312, b = -867867324
    int c;
    c = *a; // a = 312312312 / *a = 15 / c = 15
    *a = *b; // b = -867867324 / *b = 27 / *a = 27
    *b = c; // b = -867867324 / c = 15 / *b = 15
    printf("\na:%d\nb:%d\n\n", *a, *b);
    *a = 832;
}

int main(){
    int num1 = 15, num2 = 27, *ptrNum1, *ptrNum2;

    ptrNum1 = &num1; //312312312
    ptrNum2 = &num2; //-867867324

    trocaValor(ptrNum1, ptrNum2);

    printf("\n\nnum1: %d\n\nnum2: %d\n", num1, num2);


    return 0;
}