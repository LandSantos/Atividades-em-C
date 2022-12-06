#include <stdio.h>
#include <stdlib.h>

int main() {
    float num, soma=0, media=0;
    int i;

    for (i=1; i<=5; i++) {
        printf("Informe um numero:");
        scanf("%f", &num);
        soma += num;
        }
        
        media = soma / 5;
        printf("A soma eh: %.f\n", soma);
        printf("A media eh: %.f\n", media);

    return 0;
}