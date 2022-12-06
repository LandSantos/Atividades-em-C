#include <stdio.h>

int main (){
    float ganhadorA, ganhadorB, ganhadorC;
    int premio = 780000;

    ganhadorA = (0.46 * premio);
    ganhadorB = (0.32 * premio);
    ganhadorC = (0.22 * premio);

    printf ("ganhadorA recebera: %.2f\n", ganhadorA); 

    printf ("ganhadorB recebera: %.2f\n", ganhadorB); 

    printf ("ganhadorC recebera: %.2f\n", ganhadorC); 
  
    return 0;
}