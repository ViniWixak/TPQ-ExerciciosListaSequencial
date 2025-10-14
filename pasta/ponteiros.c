#include <stdio.h>

int main(){
    int num, *ptr, qualquerCoisa;

    num = 15;

    ptr = &num;

    printf("\n\nValor de num original: %d\n", num);
    
    printf("\n\nValor do endereco de memoria de num: %d\n", &num);
    
    printf("\n\nValor do ponteiro p : %d\n", ptr);
    
    printf("\n\nValor na memoria apontado pelo ponteiro p : %d\n", *ptr);
    
    *ptr = 18;
    
    printf("\n\nValor de num alterado pelo ponteiro: %d\n", num);
    
    
    return 0;
}