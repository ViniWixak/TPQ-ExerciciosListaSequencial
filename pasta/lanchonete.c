/*
Especificação       |Código   | Preço
Cachorro quente     | 100     |  4,20
Bauru simples       | 101     |  5,30
Bauru com ovo       | 102     |  8,50
Hambúrger           | 103     |  17,20
Cheeseburguer       | 104     |  15,30
Refrigerante        | 105     |  8,00

Escrever um algoritmo que leia o código do item pedido, a quantidade e
calcule o valor a ser pago por aquele lanche. Pergunte ao final se o usuário
quer adicionar algo mais ao pedido e acrescente ao valor total considerando
o item e a quantidade.*/

#include <stdio.h>

int main()
{
    int codigoDoProduto, quantidaDoPedido;
    float valorTotalDoLanche = 0, valorParcialDoLanche;
    char adicionarLanche;

    do
    {
        printf("\nInforme o codigo do produto: \n");
        scanf("%d", &codigoDoProduto);

        switch (codigoDoProduto)
        {
        case 100:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 4.20;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        case 101:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 5.30;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        case 102:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 8.50;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        case 103:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 17.20;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        case 104:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 15.30;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        case 105:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 8;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        default:
            printf("\nCodigo invalido!\n");
            break;
        }

        printf("\nO valor total do lanche foi de %.2f", valorTotalDoLanche);

        do
        {
            printf("\n\nDeseja adicionar outro item? (S/N)\n");
            fflush(stdin);
            scanf("%c", &adicionarLanche);
            if (adicionarLanche != 'S' && adicionarLanche != 'N')
            {
                printf("\nOpcao invalida, digite S ou N!\n");
            }
        } while (adicionarLanche != 'S' && adicionarLanche != 'N');

    } while (adicionarLanche == 'S');

    return 0;
}