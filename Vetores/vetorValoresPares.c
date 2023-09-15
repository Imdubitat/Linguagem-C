#include<stdio.h>

int main(){
	int vetor[10],i,contador;
	
	for(i=0;i<10;i++){
		printf("digite os elementos do vetor: ");
		scanf("%d", &vetor[i]);
	}
	
	contador=0;
	for(i=0;i<10;i++){
		if(vetor[i]%2==0){
			contador++;
		}
	}
	printf("Dentre os valores inseridos no vetor, temos %d valores pares", contador);
	
	return 0;
}
