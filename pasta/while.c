#include <stdio.h>

int main()
{
    float num1, num2;
    char operador, repeticao;

    do 
    {
        printf("\nInforme o numero 1 e o numero 2:\n");
        scanf("%f %f", &num1, &num2);
        //operador = 'q';
        printf("Operador: %c", operador);
        do
        {
            printf("\nInforme a operacao desejada (+, -, /, *):\n");
            fflush(stdin);
            scanf("%c", &operador);

            switch (operador)
            {
            case '+':
                printf("\nO resultado da soma eh: %.2f", num1 + num2);
                break;
            case '-':
                printf("\nO resultado da subtracao eh: %.2f", num1 - num2);
                break;
            case '*':
                printf("\nO resultado da multiplicacao eh: %.2f", num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                {
                    printf("\nO resultado da divisao eh: %.2f", num1 / num2);
                }
                else
                {
                    printf("\nErro: Divisao por 0 nao permitida\n");
                }
                break;
            default:
                printf("\nOpcao de operador invalida | (+ - / *)\n");
                break;
            }
        } while (operador != '+' && operador != '-' && operador != '/' && operador != '*');
        printf("\nDeseja repetir? (s/n)\n");
        fflush(stdin);
        scanf("%c", &repeticao);
    }while (repeticao == 's');

    return 0;
}