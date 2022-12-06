#include <stdio.h>
int main () {
    int num;
    
    printf ("Digite um numero: ");
    scanf ("%d", &num);

    if (num<20) printf("\nO numero e menor que 20");
    
    else printf("\nO numero e maior que 20");
    
    return 0;
}