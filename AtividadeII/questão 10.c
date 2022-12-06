#include <stdio.h>

int main (){
    int a, b, c, d, e;
    
    printf("Digite um numero inteiro: ");
    scanf("%d",&a);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d",&b);

    c= a+b;

    if (c>=20) {
        d= c + 8;
        printf("\n O novo numero e: %d", d);
    }

    else {
        e= c - 5;
        printf("\n O novo numero e: %d", e);
    }

    return 0;
}