/*
Escrever um algoritmo que leia o código do item pedido, a quantidade e
calcule o valor a ser pago por aquele lanche. Pergunte ao final se o usuário
quer adicionar algo mais ao pedido e acrescente ao valor total considerando
o item e a quantidade.
*/

#include <stdio.h>

int main()
{
    int codigoPedido, quantidadeDoPedido;
    float valorTotalDoPedido = 0;
    char controleDeRepeticao = 's';

    while (controleDeRepeticao == 's')
    {
        printf("\nInforme o codigo do pedido baseado no menu: \n\n");
        printf("\nItem - codigo - preco");
        printf("\nCachorro quente - 100 - 1,20");
        printf("\nBauru simples - 101 - 1,30");
        printf("\nBauru com ovo - 102 - 1,50");
        printf("\nHambúrger - 103 - 1,20");
        printf("\nCheeseburguer - 104 - 1,30");
        printf("\nRefrigerante - 105 - 1,00\n\n");
        scanf("%d", &codigoPedido);

        printf("\n\nInforme a quantidade do item desejado: \n");
        scanf("%d", &quantidadeDoPedido);

        switch (codigoPedido)
        {
        case 100:
        case 103:
            valorTotalDoPedido = valorTotalDoPedido + quantidadeDoPedido * 1.20;
            break;
        case 101:
        case 104:
            valorTotalDoPedido = valorTotalDoPedido + quantidadeDoPedido * 1.30;
            break;
        case 102:
            valorTotalDoPedido = valorTotalDoPedido + quantidadeDoPedido * 1.50;
            break;
        case 105:
            valorTotalDoPedido = valorTotalDoPedido + quantidadeDoPedido * 1;
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
        }

        printf("\nDeseja repetir? (s/n): \n");
        fflush(stdin);
        scanf("%c", &controleDeRepeticao);
    }


    printf("\n\nO valor total do seu lanche eh: %.2f", valorTotalDoPedido);

    return 0;
}