#include <stdio.h>

int main (){
  float a, b, c;

    printf ("Digite o valor do salario do funcionario cargoA: "); 
    scanf ("%f", &a);

    b= a * 0.07;
    c= a + b;
    printf ("O valor do reajuste do funcionario cargoA sera: %.2f\n", b);
    printf ("O valor do salario do funcionario cargoA sera: %.2f\n", c);
  

    printf ("Digite o valor do salario do funcionario cargoB: "); 
    scanf ("%f", &a);

    b= a * 0.09;
    c= a + b;
    printf ("O valor do reajuste do funcionario cargoB sera: %.2f\n", b);
    printf ("O valor do salario do funcionario cargoB sera: %.2f\n", c);
  

    printf ("Digite o valor do salario do funcionario cargoC: "); 
    scanf ("%f", &a);

    b= a * 0.05;
    c= a + b;
    printf ("O valor do reajuste do funcionario cargoC sera: %.2f\n", b);
    printf ("O valor do salario do funcionario cargoC sera: %.2f\n", c);


    printf ("Digite o valor do salario do funcionario cargoD: "); 
    scanf ("%f", &a);

    b= a * 0.12;
    c= a + b;
    printf ("O valor do reajuste do funcionario cargoD sera: %.2f\n", b);
    printf ("O valor do salario do funcionario cargoD sera: %.2f\n", c);

  return 0;
}