#include <stdio.h>

int main() {

    int vetorDeDezPos[10] = {1, 5, 8, 9, 5, 26, 5, 9, 1, 10};

    for(int i = 0; i < 10; i++){
     //   printf("\nI: %d \n", i);
        for(int j = i + 1; j < 10; j++){
         //   printf("\nJ: %d \n", j);
            if (vetorDeDezPos[i] == vetorDeDezPos[j]){
                printf("\nO elemento %d, de posicao %d se repete na posicao %d", vetorDeDezPos[i], i, j);
            }
        }
    }

    return 0;
}