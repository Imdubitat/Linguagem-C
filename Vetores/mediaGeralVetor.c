#include<stdio.h>

int main(){
	float vetor[15],soma=0,media;
	int i;
	
	printf("Digite as notas dos alunos: ");
	for(i=0;i<15;i++){
		scanf("%f", &vetor[i]);
		soma=soma+vetor[i];
	}
	
	media = soma/15;
	printf("a media geral das notas eh: %.2f", media);
	
	return 0;
}

		
