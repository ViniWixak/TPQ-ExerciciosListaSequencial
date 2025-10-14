/*
#include <stdio.h>
 
int main( ) {
  // Declaração de um array de inteiros com 5 posições
    float notasAvaliacoes[4], media;

     notasAvaliacoes[0] = 8;
     notasAvaliacoes[1] = 4;
     notasAvaliacoes[2] = 7;
     notasAvaliacoes[3] = 6;
    
     media = (notasAvaliacoes[0] + notasAvaliacoes[1] + notasAvaliacoes[2] + notasAvaliacoes[3]) / 4;

      printf("Resultado: %.2f:\n", media);
      return 0;
}

*/


#include <stdio.h>

int main() {
    float notasAvaliacao[4], media, soma = 0;
 
    for (int i = 0; i < notasAvaliacao; i++){
        printf("\n Digite a nota da prova %d\n", i + 1 );
        scanf("%f", &notasAvaliacao[i]);
    }

    for (int i = 0; i < 7; i++ ) {
        soma = notasAvaliacao[i] + soma;
        printf("Elemento na posicao %d: %.2f\n", i, notasAvaliacao[i]);

    }

    media = soma / 4;

    printf("Resultado: %.2f:\n", media);

    return 0;
}