#include <stdio.h>
#include <stdlib.h>

int main() {
    float num, soma, media, quantidade;
    int i;

    printf ("diga a quantidade de numeros: ");
    scanf("%f", &quantidade);

    for (i=1; i<=quantidade; i++) {
        printf("Informe o numero:");
        scanf("%f", &num);
        soma += num;
    }

    media = soma / quantidade;
    printf("A media eh: %.f", media);
    
    return 0;
}