#include <stdio.h>

int main (){
    int a, b;
    char s, n;
    
    printf("Qual o seu saldo medio?: ");
    scanf("%d",&a);

    if (a<=500)
    printf("\nNenhum credito.");

    else if (a > 501 && a <=1000) {
    b = a * 0.3;
    printf("\nSeu saldo medio e: %2.d",a);
    printf("\nValor do credito: %2.d",b);
    }

    else if (a > 1001 && a <=3000) {
    b = a * 0.4;
    printf("\nSeu saldo medio e: %2.d",a);
    printf("\nValor do credito: %2.d",b);
    }

    else  {
    b = a * 0.5;
    printf("\nSeu saldo medio e: %2.d",a);
    printf("\nValor do credito: %2.d",b);
    }

    return 0;
}