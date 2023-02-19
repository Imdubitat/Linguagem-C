#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[5], vetor2[5], resultado;
    int i,j, comum;

    for(i=0; i<5; i++){
        printf("posicao %d do vetor 1: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\n");

    for(i=0; i<5; i++){
        printf("posicao %d do vetor 2: ", i);
        scanf("%d", &vetor2[i]);
    }

    comum = 0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(vetor1[i] == vetor2[j]){
                comum = 1;
                printf("\nposicao %d de vetor 1 eh igual a posicao %d do vetor 2", i, j);
            }
            if(!comum){
                printf("\nnao ha elementos em comum");
            }
        }
    }
}
