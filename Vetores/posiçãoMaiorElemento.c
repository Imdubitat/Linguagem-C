#include<stdio.h>

int main(){
	int vetor[10],i,maior,posicaoMaior;
	
	for(i=0;i<10;i++){
		printf("digite os elementos do vetor: ");
		scanf("%d", &vetor[i]);
	}
	
	maior=vetor[0];
	
	for(i=0;i<10;i++){
		if(vetor[0]<vetor[i]){
			maior = vetor[i];
			posicaoMaior=i;
		}
	}
	printf("o maior valor do vetor eh %d e está na posição %d", maior, posicaoMaior);
	
	return 0;
}
