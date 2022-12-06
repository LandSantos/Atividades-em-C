#include <stdio.h>

int main (){
    int p, p2, p3, p4, p5, p6, p7, b;
    
    printf("Quanto voce pesa?: ");
    scanf("%d",&p);

    fflush(stdin);

    printf("\nInsira um planeta: \nMercurio=1, Venus=2, Marte=3, Jupiter=4, Saturno=5, Urano=6: ");
    scanf("%d",&b);

    p2=p*0.37;
    p3=p*0.88;
    p4=p*0.38;
    p5=p*2.64;
    p6=p*1.15;
    p7=p*1.17;
    
    if (b ==1) 
    printf("\nSeu peso nesse planeta e: %d", p2);

    else if (b==2) 
    printf("\nSeu peso nesse planeta e: %d", p3);

    else if (b==3) 
    printf("\nSeu peso nesse planeta e: %d", p4);

    else if (b==4) 
    printf("\nSeu peso nesse planeta e: %d", p5);

    else if (b==5) 
    printf("\nSeu peso nesse planeta e: %d", p6);

    else if (b==6) 
    printf("\nSeu peso nesse planeta e: %d", p7);

    return 0;
}
