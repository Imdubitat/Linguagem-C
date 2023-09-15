#include<stdio.h>

int main(){
	int vetor[10],i;
	
	for(i=0;i<10;i++){
		printf("digite os elementos do vetor: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("o vetor, na ordem inversa eh: ");
	for(i=9;i>0;i--){
		printf(" [%d]", vetor[i]);
	}
	
	return 0;
	
}
