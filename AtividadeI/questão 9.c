#include <stdio.h>

int main (){ 
    float A, B, C;    

    printf ("Digite o valor do salario do funcionário A: ");     
    scanf ("%f", &A);  

    B= A * 0.25;   
    C= A + B;    

    printf ("O valor do salário apos o aumento sera: %.2f\n", C);    

    return 0;
}