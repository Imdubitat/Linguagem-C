#include<stdio.h>

int main(){
	float vetor[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("digite os elementos do vetor: ");
		scanf("%f", &vetor[i]);
	}
	
	for(i=0;i<10;i++){
		printf("\n%.2f^2 = %.2f", vetor[i], vetor[i]*vetor[i]);
	}

	return 0;
}
