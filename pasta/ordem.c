#include <stdio.h>
int main()
{
    // 6. Decrescente:
    // Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente.

    int num1, num2, num3;

    printf("\nInforme o primeiro numero: \n");
    scanf("%d", &num1);

    printf("\nInforme o segundo numero: \n");
    scanf("%d", &num2);

    printf("\nInforme o terceiro numero: \n");
    scanf("%d", &num3);

    if ((num1 >= num2) && (num2 >= num3))
    {
        printf("Ordem decrescente: %d, %d, %d", num1, num2, num3);
    }
    else if ((num1 >= num3) && (num3 > num2))
    {
        printf("Ordem decrescente: %d, %d, %d", num1, num3, num2);
    }
    else if ((num2 >= num1) && (num1 >= num3))
    {
        printf("Ordem decrescente: %d, %d, %d", num2, num1, num3);
    }
    else if ((num2 >= num3) && (num3 >= num1))
    {
        printf("Ordem decrescente: %d, %d, %d", num2, num3, num1);
    }
    else if ((num3 >= num1) && (num1 >= num2))
    {
        printf("Ordem decrescente: %d, %d, %d", num3, num1, num2);
    }
    else if ((num3 >= num2) && (num2 >= num1))
    {
        printf("Ordem decrescente: %d, %d, %d", num3, num2, num1);
    }
    return 0;
}
