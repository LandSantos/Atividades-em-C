#include <stdio.h>

int main () {
    int num;

    printf ("Digite um numero de 1 a 12: ");
    scanf ("%d", &num);

    if (num==1) printf("\nO mes eh Janeiro");

    else if (num==2) printf("\nO mes eh Fevereiro");
    else if (num==3) printf("\nO mes eh Marco");
    else if (num==4) printf("\nO mes eh Abril");
    else if (num==5) printf("\nO mes eh Maio");
    else if (num==6) printf("\nO mes eh Junho");
    else if (num==7) printf("\nO mes eh Julho");
    else if (num==8) printf("\nO mes eh Agosto");
    else if (num==9) printf("\nO mes eh Setembro");
    else if (num==10) printf("\nO mes eh Outubro");
    else if (num==11) printf("\nO mes eh Novembro");
    else if (num==12) printf("\nO mes eh Dezembro");
    
    else printf("\nNao existe mes com esse numero");

    return 0;
}