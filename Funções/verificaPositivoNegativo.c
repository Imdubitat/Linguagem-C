#include<stdio.h>

void verificaNumero(int num){
	if(num>0){
		printf("numero eh positivo");
	}else{
		printf("numero eh negativo");
	}
}

int main(){
	int numero;
	
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	verificaNumero(numero);
	
	return 0;
}
