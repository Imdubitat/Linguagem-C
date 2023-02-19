/********************************************
Este programa lê um valor e o assume como o limite
superior de uma contagem que começa em zero.
*********************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,i;
	
	printf("Quantos numeros você deseja imprimir?\n");
	scanf("%d", &n);
	
	i=1;
	
	while(i<=n){
		printf("%d ", i);
		i++;
	}
	return 0;
}
