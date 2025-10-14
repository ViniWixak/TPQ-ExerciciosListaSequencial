#include <stdio.h>

int main() {
    int ladoA, ladoB, pedido;

    printf("\nInforme o lado A: \n");
    scanf("%d", &ladoA);
    printf("\nInforme o lado B: \n");
    scanf("%d", &ladoB);
    printf("\nInforme o lado C: \n");
    scanf("%d", &ladoC);

    if(ladoA == ladoB && ladoA == ladoC){
        printf("\nEQUILATERO\n");
    }
    else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
        printf("\nISOSCELES\n");
    }else {
        printf("\nESCALENO\n");
    }

    return 0;
}