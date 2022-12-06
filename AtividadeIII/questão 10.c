#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, qtdVolumes=0;
    float peso, pesoTotal=0, pesoMedio=0;
    
    printf("deseja cadastrar uma caixa? Digite 1-sim ou 2-nao \n");
    scanf("%d", &i);
    
    while (i == 1) {
        qtdVolumes++;
        printf("qual o peso da caixa? \n");
        scanf("%f", &peso);
        pesoTotal += peso;
        printf("deseja cadastrar novamente? Digite 1-sim ou 2-nao \n");
        scanf("%d", &i);
    }
    
    pesoMedio = pesoTotal / qtdVolumes;
    printf("quantidade de volumes: %d \n", qtdVolumes);
    printf("peso total dos volumes: %f \n", pesoTotal);
    printf("peso medio dos volumes: %f \n", pesoMedio);
    
    return 0;
}