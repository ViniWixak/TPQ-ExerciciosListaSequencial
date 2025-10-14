#include <stdio.h>

float soma(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
    return a - b;
}

float multplicacao(float a, float b){
    return a * b;
}

float divisao(float a, float b){
    if (b == 0){
        
    }
    return a / b;
}

float calculadora(float num1, float num2, char op)
{
    switch (op)
    {
    case '+':
        return soma(num1, num2);
    case '-':
        return subtracao(num1, num2);
    case '*':
        return multplicacao(num1, num2);
    case '/':
        return divisao(num1, num2);
    default:
        break;
    }
}


int main()
{
    float a, b, resultado;
    char operador;

    printf("\nInforme o primeiro numero: \n");
    scanf("%f", &a);

    printf("\nInforme o segundo numero: \n");
    scanf("%f", &b);

    printf("\nInforme a operacao: '+', '-', '/', '*' \n");
    fflush(stdin);
    scanf("%c", &operador);

    resultado = calculadora(a, b, operador);

    printf("\n\nResultado: %.2f", resultado);

    return 0;
}

