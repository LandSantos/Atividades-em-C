#include <stdio.h>
#include <stdlib.h>

int main() {
    float num;
    int i;
    
    for (i=1; i<=10; i++) {
        printf("informe um numero:");
        scanf("%f", &num);
    }

    while (num <= 0) {
        printf("\n número inserido não pode ser menor que 0:");
        scanf("%f", &num);
    }
        printf("quadrado desse numero: %.f\n", num * num);
        
    return 0;
}