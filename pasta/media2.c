/*16.Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno,
calcule e imprima a média (simples) desse aluno. Só devem ser aceitos
valores válidos durante a leitura (0 a 10) para cada nota. Por último, exiba a
mensagem 'NOVO CÁLCULO (S/N)?', se for respondido 'S' deve retornar e
executar um novo cálculo, caso contrário deverá encerrar o algoritmo.*/

#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    char replay;

    do
    {
        do
        {
            printf("\nInsira a primeira nota:\n");
            fflush(stdin);
            scanf("%f", &nota1);

            if (nota1 < 0 || nota1 > 10)
            {
                printf("Nota invalida, digite valores entre 0 e 10");
            }
        } while (nota1 < 0 || nota1 > 10);

        do
        {
            printf("\nInsira a segunda nota:\n");
            fflush(stdin);
            scanf("%f", &nota2);

            if (nota2 < 0 || nota2 > 10)
            {
                printf("Nota invalida, digite valores entre 0 e 10");
            }
        } while (nota2 < 0 || nota2 > 10);

        media = (nota1 + nota2) / 2;

        printf("\n\nA media eh: %.1f\n", media);

        do {
            printf("\n\nNOVO CALCULO (S/N)?\n");
            fflush(stdin);
            scanf("%c", &replay);

            if (replay != 'S' && replay != 'N')
            {
                printf("Opcao invalida!");
            }
        } while (replay != 'S' && replay != 'N');
        
    } while (replay == 'S');

    return 0;
}