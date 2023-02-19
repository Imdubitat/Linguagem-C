#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor1[5], vetor2[5], resultado;
    int i;

    for(i=0; i<5; i++){
        printf("posicao %d do vetor 1: ", i);
        scanf("%lf", &vetor1[i]);
    }

    for(i=0; i<5; i++){
        printf("posicao %d do vetor 2: ", i);
        scanf("%lf", &vetor2[i]);
    }

    for(i=0; i < 5; i++){
        resultado = resultado + (vetor1[i]*vetor2[i]);
    }
    printf("\no produto interno eh: %lf", resultado);
}
