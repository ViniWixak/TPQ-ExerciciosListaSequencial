//Escreva um algoritmo para imprimir os 10 primeiros números primos maiores
//que 100.

//Os 10 primeiros números primos maiores que 100 são:
// 101, 103, 107, 109, 113, 127, 131, 137, 139 e 149.

#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int count = 0; // 1 - 1 - 2 - 2 - 2 - 2 - 3 - ... - 10
    int num = 101; // 102 - 103 - 104 - 105 - 106 - 107 - ... - 149

    printf("Os 10 primeiros números primos maiores que 100 são:\n");
    
    while (count < 10) {
        if (isPrime(num)) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}