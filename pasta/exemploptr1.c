// Acessando o valor de uma variável via ponteiro

// 1. Declare uma variável inteira com valor 42.
// 2. Crie um ponteiro que armazene o endereço dessa variável.
// 3. Imprima o valor da variável usando o ponteiro (com desreferenciação).
// 4. Imprima o endereço de memória da variável de duas formas: com & e com o ponteiro.

#include <stdio.h>

int main(){
    int num = 42, *ptrNum;

    ptrNum = &num;// 1163917508

    printf("\n\n%d\n", *ptrNum);
    printf("\n\n%d\n", &num);
    printf("\n\n%d\n", ptrNum);

    return 0;
}