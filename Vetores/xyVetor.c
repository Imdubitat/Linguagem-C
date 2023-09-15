#include<stdio.h>

int main(){
	int vetor[8],x,y,soma,i;
	
	for(i=0;i<8;i++){
		printf("digite os elementos do vetor: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("digite uma posição do vetor [0 a 7]: ");
	scanf("%d", &x);
	printf("digite outra posição do vetor [0 a 7]: ");
	scanf("%d", &y);
	
	soma = vetor[x]+vetor[y];
	
	printf("a soma dos valores %d e %d eh: %d: ", vetor[x],vetor[y],soma);
	
	return 0;
}
	
