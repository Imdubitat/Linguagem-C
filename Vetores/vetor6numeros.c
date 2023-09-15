#include<stdio.h>

int main(){
	int vetor[6];
	int soma,i;
	
	for(i=0;i<6;i++){
		printf("digite os valores do vetor: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("os elementos do vetor sao:");
	for(i=0;i<6;i++){
		printf("\n%d", vetor[i]);
	}
	
	soma = vetor[0]+vetor[1]+vetor[5];
	printf("\na soma dos valores %d, %d, %d eh igual a: %d", vetor[0], vetor[1], vetor[5], soma);

	printf("\nDigite um novo valor para o quinto elemento do vetor: ");
	scanf("%d", &vetor[4]);
	
	printf("o vetor modificado eh igual a:");
	for(i=0;i<6;i++){
		printf("\n%d", vetor[i]);
	}
	
	return 0;
}
