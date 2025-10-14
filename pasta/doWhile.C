#include <stdio.h>

int main()
{
    int senha, senhaValida = 539217, numeroDeTentativas = 1;

    do
    {
        printf("\nInforme sua senha:\n");
        scanf("%d", &senha);

        if (senha != senhaValida)
        {
            printf("\nSenha invalida:\n");
        }
        else
        {
            printf("\nMuito bem voce acertou de novo!!!!!\n");
        }
    }while (senha == senhaValida);

    return 0;
}