// Criar uma função que modifica uma variável via ponteiro

// 1. Crie uma função chamada "dobrar" que recebe um ponteiro para int.
// 2. A função deve dobrar o valor da variável apontada.
// 3. No main, declare uma variável, chame a função e imprima o valor antes e depois.

#include <stdio.h>

// tipoDeRetorno nomeDaFuncao(tipoDeParametro nomeDoParametro){
//     //processa os dados
//     return valor;
// }

void dobrar(int *ptr){
    *ptr = *ptr * 2;
}

int main(){
    int num = 13, *ptrNum;
    // &num = 43512318
    // &ptrNum = 123654546 -> 43512318
    ptrNum = &num;

    printf("\n\n%d\n", num);
    
    dobrar(ptrNum);
    
    printf("\n\n%d\n", num);

    return 0;
}
