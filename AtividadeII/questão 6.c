#include <stdio.h>

int main (){
    int a, b;
    
    printf("Qual o destino do passageiro: \nRegiao Norte=1, Regiao Nordeste=2, Regiao CentroOeste=3, Regiao Sul=4: ");
    scanf("%d",&a);

    fflush(stdin);

    printf("\nsua viagem inclui retorno? Responda 5 para sim e 6 para nao: "); //tentei colocar S pra sim e N pra nao mas nao consegui
    scanf("%d",&b);

    if (a ==1 && b ==5) 
    printf("\no valor da passagem e: 900");

    else if (a ==1 && b==6) 
    printf("\nO valor da passagem e: 500");

    else if (a ==2 && b==5) 
    printf("\nO valor da passagem e: 650");

    else if (a ==2 && b==6) 
    printf("\nO valor da passagem e: 350");

    else if (a ==3 && b==5) 
    printf("\nO valor da passagem e: 600");

    else if (a ==3 && b==6) 
    printf("\nO valor da passagem e: 350");

    else if (a ==4 && b==5) 
    printf("\nO valor da passagem e: 550");
    
    else 
    printf("\nO valor da passagem e: 300");

    return 0;
}

    