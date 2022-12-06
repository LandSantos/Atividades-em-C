#include <stdio.h>

int main (){
    float F, C;

    printf ("Digite a temperatura em Celsius: "); 
    scanf ("%f", &C);

    F = (C * (9.0/5.0)) + 32.0;

    printf ("A mesma temperatura em Fahrenheit sera: %.2f\n", F);
  
    return 0;
}