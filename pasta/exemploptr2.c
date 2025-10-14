// Modificando valor com ponteiro

// 1. Crie uma variável inteira com valor 10.
// 2. Atribua o endereço dela a um ponteiro.
// 3. Usando o ponteiro, altere o valor da variável para 99.
// 4. Imprima o novo valor da variável.

#include <stdio.h>

int main(){
    int nomeDaVariavel = 10, *ptr;

    ptr = &nomeDaVariavel; // 14534532423 -> 99

    *ptr = 99;

    printf("\n\n%d\n", nomeDaVariavel);

    return 0;
}