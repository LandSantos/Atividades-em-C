#include <stdio.h>

int main (){
    float K, M;

    printf ("Digite uma velocidade em km/h: "); 
    scanf ("%f", &K);

    M = K/3.6;

    printf ("Essa velocidade em m/s sera: %.f\n", M);
  
    return 0;
}