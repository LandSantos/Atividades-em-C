#include <stdio.h>

int main (){
    float A;

    printf ("Digite um numero: "); 
    scanf ("%f", &A);

    A = A/5;

    printf ("Quinta parte desse numero eh igual: %.f\n", A);
  
    return 0;
}