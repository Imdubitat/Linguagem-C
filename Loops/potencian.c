/*imprime a potencia de 2 definida pelo usuário.
Autor: Rodrigo Oliveira Feitosa
ADS 2022.2 - 1°semestre*/
#include<stdio.h>
#include<stdlib.h>

int main(){

	int potencia, numero;

	printf("Qual o expoente desejado?");
	printf("RESPOSTA: ");
	scanf("%d", &numero);

	i = 0;
	potencia = 1;

	while(i <= numero){
		printf("2^%d = %d\n", i,pot);
		potencia = potencia*2;
		i++;
	}

	return 0;
}
