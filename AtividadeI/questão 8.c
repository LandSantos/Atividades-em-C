#include <stdio.h>

int main (){
    float A;

    printf ("Digite o valor do produto A: "); 
    scanf ("%f", &A);

    A= A * 0.12;

    printf ("O valor do produto A com desconto sera: %.2f\n", A);
  
    return 0;
}