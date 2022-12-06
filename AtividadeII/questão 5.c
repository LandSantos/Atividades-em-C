#include <stdio.h>

int main (){
    float a;
    char sexo;

    printf("\nDigite a altura em centimetros:");
    scanf("%f", &a);
    a = a/100;

    fflush(stdin);
    printf("\nDigite o sexo, Masculino=m e Feminino=f:");
    scanf("%c", &sexo);

    if (sexo == 'm'){
    a = 72.2 * a;
    a = a-58;
    printf("\nO peso ideal e: %.2f", a);
    }

    else if(sexo == 'f'){
    a = 62.1 * a;
    a = a - 44.7;
    printf("\nO peso ideal e: %.2f", a);
    }  

    return 0;

}
