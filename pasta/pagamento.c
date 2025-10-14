/*
Elabore um algoritmo que calcule o que deve ser pago por um produto,
considerando o preço da etiqueta (informado pelo usuário) e a escolha da condição
de pagamento. Utilize os códigos a seguir para ler qual a condição de pagamento
escolhida e efetuar o cálculo adequado.
Código Condição de pagamento
1 - À vista em dinheiro ou cheque, recebe 10% de desconto
2 - À vista no cartão de crédito, recebe 5% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em três vezes, preço normal de etiqueta mais juros de 10%
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float precoDaEtiqueta, totalAPagar, valorDaParcela;
    int condicaoDePagamento;

    printf("\n\nDigite o preco da etiqueta e a forma de pagamento de acordo com as opcoes abaixo \n\n1- À vista em dinheiro ou cheque, recebe 10 porcento de desconto \n2 - À vista no cartão de crédito, recebe 5 porcento de desconto\n3 - Em duas vezes, preço normal de etiqueta sem juros\n4 - Em três vezes, preço normal de etiqueta mais juros de 10 porcento\n\n");
    scanf("%f", &precoDaEtiqueta);
    scanf("%d", &condicaoDePagamento);

    if (condicaoDePagamento == 1)
    {
        totalAPagar = precoDaEtiqueta - 10 * precoDaEtiqueta / 100;
        printf("\n\nO valor total eh de R$: %.2f, a vista.\n", totalAPagar);
    }
    else if (condicaoDePagamento == 2)
    {
        totalAPagar = precoDaEtiqueta - 5 * precoDaEtiqueta / 100;
        printf("\n\nO valor total eh de R$: %.2f, no credito.\n", totalAPagar);
    }
    else if (condicaoDePagamento == 3)
    {
        valorDaParcela = precoDaEtiqueta / 2;
        printf("\n\nO valor total eh de R$: %.2f, em 2x de R$: %.2f.\n", precoDaEtiqueta, valorDaParcela);
    }
    else if (condicaoDePagamento == 4)
    {
        totalAPagar = precoDaEtiqueta + 10 * precoDaEtiqueta / 100;
        valorDaParcela = totalAPagar / 3;
        printf("\n\nO valor total eh de R$: %.2f, em 3x de R$: %.2f\n", totalAPagar, valorDaParcela);
    } else  {
        printf("\n\nCodigo para condicao de pagamento errado.\n\n");
    }

    return 0;
}