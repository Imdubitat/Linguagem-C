#include<stdio.h>
#include<stdlib.h>

int main(){

	int n1;

	printf("digite um numero: ");
	scanf("%d", &n1);

	if(((n1%2==0) && (n1>10)) || ((n1%2!=0) && (n1<50))){
	printf("SIM");
	}

	else{

	printf("NAO");
	}

	return 0;
	}
