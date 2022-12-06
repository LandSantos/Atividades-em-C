#include <stdio.h>

int main (){
    float H, R, V;

    printf ("Digite a altura do cilindro: "); 
    scanf ("%f", &H);

    printf ("Digite o raio do cilindro: "); 
    scanf ("%f", &R);

    V = 3.141592 * R * H;

    printf ("O volume do cilindro sera: %.2f\n", V);
  
    return 0;
}