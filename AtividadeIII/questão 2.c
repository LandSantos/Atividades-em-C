#include <stdio.h>
#include <stdlib.h>

int main() {
    float num, soma=0, media=0;
    int i;

    for (i=1; i<=10; i++) {
        printf("Informe um numero:");
        scanf("%f", &num);soma += num;
    }

        media = soma / 10;
        printf("A media eh: %.f", media);
        
        return 0;
    }