#include <stdio.h>


int dobrar(int valor){ // valor -> 13
    return valor * 2; // valor -> 26
}

int main(){
    int num = 13; 
    
    printf("\n\n%d\n", num);
    
    num = dobrar(num);
    
    printf("\n\n%d\n", num);

    return 0;
}