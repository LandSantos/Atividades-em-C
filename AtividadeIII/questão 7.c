#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=1, n, soma=0;

    printf("informe o valor n:");
    scanf("%d", &n);

    while (i <= n) {
        soma += i;
        i++;
    }
    
    printf("soma: %d \n", soma);
    
    return 0;
}