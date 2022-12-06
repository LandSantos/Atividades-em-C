#include <stdio.h>

int main(){    
    int A, B, C, soma;  
      
    printf("Digite o valor de A: ");    
    scanf("%d", &A);    

    printf("Digite o valor de B: ");    
    scanf("%d", &B);    
    
    printf("Digite o valor de C: ");    
    scanf("%d", &C);    
    
    soma = A + B + C;   
    printf("O valor da soma eh: %d\n", soma);    
    
    return 0;
}