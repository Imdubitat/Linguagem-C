#include<stdio.h>

int main(){
	int vetor[10],i,maior,menor;
	
	for(i=0;i<10;i++){
		printf("digite os elementos do vetor: ");
		scanf("%d", &vetor[i]);
	}
	
	maior=vetor[0];
	menor=vetor[0];
	
	for(i=0;i<10;i++){
		if(vetor[0]<vetor[i]){
			maior = vetor[i];
		}
		if(vetor[0]>vetor[i]){
			menor = vetor[i];
		}
	}
	printf("o maior valor do vetor eh: %d", maior);
	printf("\no menor valor do vetor eh: %d", menor);
	
	return 0;
}
