#include <stdio.h>

int main () {

    printf("1, ");
    printf("1 2 3 4 5 6 7 8 9 10");
    return 0;



    for (int j = 1; j <= 10; j ++){
        printf("\n%d, ", j);
        for (int i = 1; i<= 10; i++){
            printf("%d ", i);
        }
    }
}