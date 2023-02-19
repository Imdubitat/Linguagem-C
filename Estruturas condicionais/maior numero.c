/********************************************
Este programa limprime o maior numero entre 3 digitados pelo usuário.
*********************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

	int n1,n2,n3;

	printf("digite um numero: ");
	scanf("%d", &n1);

	printf("digite um numero: ");
	scanf("%d", &n2);

	printf("digite um numero: ");
	scanf("%d", &n3);

	if((n1>n2) && (n1>n3)){
	printf("%d", n1);
	}

	else if(n2>n3){

	printf("%d", n2);
	}

	else if(n3>n2){

	printf("%d", n3);
	}
	return 0;
	}
