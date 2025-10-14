#include <stdio.h>

int main()
{

    int numerosInteiros[7];

    printf("\nInforme 7 numeros inteiros: \n");
    
    for (int i = 0; i < 7; i++)
    {
    //    printf("\nInforme o numero %d: ", i + 1);
        scanf("%d", &numerosInteiros[i]);
    }

    printf("\nA ordem inversa eh\n");
    
    for (int i = 6; i >= 0; i--)
    {
        printf("%d, ", numerosInteiros[i]);
    }
    return 0;
}