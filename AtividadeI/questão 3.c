#include <stdio.h>

int main (){
    float A;

    printf ("Digite um numero: "); 
    scanf ("%f", &A);
    
    A = A * A;

    printf ("Valor desse numero ao quadrado: %.f\n", A);
  
    return 0;
}