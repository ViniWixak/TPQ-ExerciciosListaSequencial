// 43.Escreva um aplicativo em C mostra todos os números ímpares de 1 até 100
// i += 2
// i = i + 2;
#include <stdio.h>

int main() {

    for(int i = 1; i <= 100; i ++){
        if ( i % 2 != 0 ){
            printf("\n%d", i);
        }
    }

    return 0;
}