/**********************************************
imprime todos os n�mero dentro de um intervalo
pr�-determinado pelo usu�rio.
Autor: Rodrigo Oliveira Feitosa
ADS 2022.2 - 1�semestre
************************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

	int numeros, limite;

	numeros = 0;

	printf("Qual o limite superior dos numeros a serem impressos?");
	printf("\nRESPOSTA: ");
	scanf("%d", &limite);

	while(numeros < limite){
		numeros = numeros+1;
		printf("\n%d", numeros);
	}

	return 0;
}
