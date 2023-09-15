#include<stdio.h>

int main(){
	float vetor[10];
	int i,j,contador;
	
	contador=0;
	printf("Digite 10 valores reais: ");
	for(i=0;i<10;i++){
		scanf("%f", &vetor[i]);
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(vetor[i]==vetor[j]){
				contador++;
			}
		}
	}
	printf("temos %d valores repetidos", contador);
	
	
	return 0;
}	
