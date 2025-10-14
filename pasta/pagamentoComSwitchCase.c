/*
Elabore um algoritmo que calcule o que deve ser pago por um produto,
considerando o preço da etiqueta (informado pelo usuário) e a escolha da condição
de pagamento. Utilize os códigos a seguir para ler qual a condição de pagamento
escolhida e efetuar o cálculo adequado.
Código Condição de pagamento
1 - À vista em dinheiro, recebe 10% de desconto
2 - À vista no cartão de crédito, recebe 5% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em três vezes, preço normal de etiqueta mais juros de 10%
*/

#include <stdio.h>

int main () {
    float valorDaEtiqueta, valorTotalAPagar, valorParcela;
    int condicaoDePagamento;

    printf("\n\nInforme o preco da etiqueta: \n");
    scanf("%f" , &valorDaEtiqueta);
    printf("\n\nInforme a condicao de pagamento: \n");
    scanf("%d", &condicaoDePagamento);

    switch (condicaoDePagamento)
    {
    case 1:
        valorTotalAPagar = valorDaEtiqueta - 10 * valorDaEtiqueta / 100;
        printf("\n\nO valor total a ser pago eh de %.2f, a vista no dinheiro ou pix\n", valorTotalAPagar);
        break;
    case 2:
        valorTotalAPagar = valorDaEtiqueta - 5 * valorDaEtiqueta / 100;
        printf("\n\nO valor total a ser pago eh de %.2f, a vista no credito\n", valorTotalAPagar);
        break;
    case 3:
        valorParcela = valorDaEtiqueta / 2;
        printf("\n\nO valor total a ser pago eh de %.2f, em 2x de %.2f\n", valorDaEtiqueta, valorParcela);
        break;
    case 4:
        valorTotalAPagar = valorDaEtiqueta + 5 * valorDaEtiqueta / 100;
        valorParcela = valorTotalAPagar / 3;
        printf("\n\nO valor total a ser pago eh de %.2f, em 3x de %.2f\n", valorTotalAPagar, valorParcela);
        break;
    default:
        printf("\n\nOpcao de pagamento invalida");
        break;
    }


    return 0;
}