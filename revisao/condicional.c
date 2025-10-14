#include <stdio.h>
#include <stdbool.h>

int main()
{
    // booleano -> bool -> binario -> 0 ou 1

    int idade;
    char vestibular;
    float notaEM;

    printf("\nInforme sua idade, se passou no vest e a nota EM: ");
    scanf("%d", &idade);
    printf("\nInforme sua idade, se passou no vest e a nota EM: ");
    scanf("%c", &vestibular);
    printf("\nInforme sua idade, se passou no vest e a nota EM: ");
    scanf("%f", &notaEM);
    
    if (idade >= 18 && vestibular == 's' && notaEM >= 6){
        printf("\nPARABENS!!\n\nVoce ingressou na universidade");
    }else{

    } else if{
        
    }

    return 0;
}