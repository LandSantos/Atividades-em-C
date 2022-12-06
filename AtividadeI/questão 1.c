#include <stdio.h>

int main(){
    int A;
    float B;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &A);

    printf ("Digite um numero decimal: ");
    scanf ("%f", &B);

    printf ("O primeiro numero digitado foi: %d", A);
    printf ("\nO segundo numero digitado foi: %f", B);

    return 0;
}