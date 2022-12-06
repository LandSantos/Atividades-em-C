#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    
    do {
        printf("\n digite um numero ou multiplo de 6 :");
        scanf("%d", &num);
        printf("quadrado desse numero: %d \n", num * num);
    } while ((num % 6) != 0);

    return 0;    
}