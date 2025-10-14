/*
6. Fusão de Dois Arrays:
Crie um programa que leia dois arrays de 5 elementos cada, e depois crie um terceiro 
array que contenha os elementos dos dois primeiros arrays, resultando em um array 
de 10 elementos
*/


#include<stdio.h>

int main() {
    int primeiroArray[5], segundoArray[5], doisEmUm[10];

    for(int i = 0; i <5; i++){
        printf("\nInforme o numero %d do primeiro array:\n ", i + 1);
        scanf("%d", &primeiroArray[i]);
    }

    for(int i = 0; i <5; i++){
        printf("\nInforme o numero %d do segundo array:\n ", i + 1);
        scanf("%d", &segundoArray[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        doisEmUm[4] = primeiroArray[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        doisEmUm[i + 5] = segundoArray[i];
    }
    

    printf("\nA juncao dos dois arrays eh igual ah: \n");

    for (int i = 0; i < 10; i ++){
        printf("%d, ", doisEmUm[i]);
    }

    return 0;
}