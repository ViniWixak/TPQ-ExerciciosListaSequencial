#include <stdio.h>

int main() {
    int x;
    char y;

    printf("\nInforme um valor pra X\n");
    scanf("%d", &x);
    printf("\nX: %d", x);

    printf("\nInforme um valor pra y\n");
    fflush(stdin);
    scanf("%c", &y);
    printf("\nY: %c", y);



    return 0;
}