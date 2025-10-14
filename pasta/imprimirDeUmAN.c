// Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N
//(inclusive). Tratar casos em que o N for menor que ZERO, exibindo a
// mensagem “Numero invalido” e executando novamente a operação.

#include <stdio.h>

int main()
{
    int N;

    do {
        printf("\nInforme o valor de N:\n");
        scanf("%d", &N);

        if (N < 0)
        {
            printf("\nNumero Invalido\n");
        }
        for (int i = 1; i <= N; i++)
        {
            printf("\n%d", i);
        }
    } while (N < 0);

    return 0;
}