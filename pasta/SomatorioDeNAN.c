// Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2
// valores lidos (incluindo os valores lidos na soma). Tratar casos onde segundo
// valor lido for menor que o primeiro valor, exibindo a mensagem “Numero
// invalido” e executando novamente a operação.

#include <stdio.h>

int main()
{
    int valor1, valor2, valorSoma = 0;

    do {
        printf("\nInforme o primeiro valor:\n");
        scanf("%d", &valor1);

        printf("\nInforme o segundo valor:\n");
        scanf("%d", &valor2);

        for (int i = valor1; i <= valor2; i++)
        {
            valorSoma = valorSoma + i;
        }

        if (valor2 < valor1)
        {
            printf("\n\nNumero Invalido\n");
        }
        else
        {
            printf("\n\nA soma dos numeros inteiros de %d ate %d eh igual a %d\n", valor1, valor2, valorSoma);
        }
    }while(valor2 < valor1);

    return 0;
}