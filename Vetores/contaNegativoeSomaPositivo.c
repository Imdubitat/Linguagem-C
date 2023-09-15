#include<stdio.h>

int main(){
	float vetor[10],soma=0;
	int i,contador;
	
	contador=0;
	printf("Digite 10 valores reais: ");
	for(i=0;i<10;i++){
		scanf("%f", &vetor[i]);
		if(vetor[i]<0){
			contador++;
		}
		if(vetor[i]>0){
			soma=soma+vetor[i];
		}
	}
	
	printf("o vetor contém %d valores negativos", contador);
	printf("\na soma dos valores positivos eh: %.2f", soma);
	
	return 0;
}
			
