#include <stdio.h>

int main() {
    int n, i, factorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Não é possível calcular o fatorial de um número negativo.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial = factorial * i;
        }
        printf("O fatorial de %d é %d.\n", n, factorial);
    }

    return 0;
}