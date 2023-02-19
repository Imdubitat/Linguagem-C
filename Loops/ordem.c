#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int numero, atual, anterior, ordem, i;
	
	printf("Quantos numeros você vai digitar: ");
	scanf("%d", &numero);
	
	printf("digite o primeiro: ");
	scanf("%d", &anterior);
	
	i=1;
	ordem = 1;
	
	while(i<numero){
		printf("Proximo: ");
		scanf("%d", &atual);
		i++;
		
		if((atual<anterior)&&(ordem)){
			ordem = 0;
			anterior = atual;
		}
	}
		if(ordem){
			printf("Sequencia ordenada");
		}else{
			printf("Sequencia nao ordenada");
		}
}
