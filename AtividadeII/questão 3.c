#include <stdio.h>

int main () {
    int num, num2;

    printf ("Digite um numero: ");
    scanf ("%d", &num);

    if (num>20) num2= num * 2;

    else num2= num * 4;   

    printf("\nResultado: = %d",num2);
    
    return 0;
}