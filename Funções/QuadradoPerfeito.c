#include<stdio.h>

void verificaQuadrado(int num){
	int i;
	
	for(i=0;i<num;i++){
		if(num==i*i){
			printf("eh um quadrado perfeito");
			break;
		}
	}
	if(num!=i*i){
		printf("nao eh um quadrado perfeito");
	}
}

int main(){
	int numero;
	
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	verificaQuadrado(numero);
	
	return 0;
}
