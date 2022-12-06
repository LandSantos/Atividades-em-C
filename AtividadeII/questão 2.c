#include <stdio.h>

int main () {
    int num, num2;

    printf ("Digite um numero: ");
    scanf ("%d", &num);

    if (num<20) printf("\nO numero eh menor que 20");
    
    else { 
        num2= num * 2;
        printf("\nResultado: = %d",num2);
    }

    return 0;
}