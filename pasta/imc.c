/*
Construa um programa que, dado o peso e a altura de uma pessoa, calcule
seu Índice de Massa Corporal (IMC) e informe se ela está abaixo do peso, no peso
ideal, com sobrepeso, ou obesa.
IMC em adultos Condição
Abaixo de 18,5 Abaixo do peso
Entre 18,5 e 25 Peso normal
Entre 25 e 30 Acima do peso
Acima de 30 obeso
*/

#include <stdio.h>

float calculaImc(float peso, float altura){
    return peso / (altura * altura);
}

void classificacaoImc(float imc){
    if (imc <= 18.5) {
        printf("\n\nAbaixo do peso\nSeu peso eh: %.2f\nSua altura eh %.2f\nSeu imc eh: %.2f\n", peso, altura, imc);
    } else if (imc > 18.5 && imc <= 25) {
        printf("\n\nPeso normal\nSeu peso eh: %.2f\nSua altura eh %.2f\nSeu imc eh: %.2f\n", peso, altura, imc);
    } else if (imc > 25 && imc <= 30) {
        printf("\n\nAcima do peso\nSeu peso eh: %.2f\nSua altura eh %.2f\nSeu imc eh: %.2f\n", peso, altura, imc);
    } else {
        printf("\n\nObeso\nSeu peso eh: %.2f\nSua altura eh %.2f\nSeu imc eh: %.2f\n", peso, altura, imc);
    }
}

int main() {
    float peso, altura, imc;

    printf("\n\nInforme seu peso: \n");
    scanf("%f", &peso);
    printf("\n\nInforme sua altura: \n");
    scanf("%f", &altura);

    imc = calculaImc(peso, altura);

    classificacaoImc(imc);

    printf("Esse texto vai ser executado independente do imc");

    return 0;
}