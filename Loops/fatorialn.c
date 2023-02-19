/******************************************
imprime o valor do fatorial de uma valor
determinado pelo usuário.
Autor: Rodrigo Oliveira Feitosa
ADS 2022.2 - 1°semestre
*******************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

	int fatorial, numero;

	printf("Digite o fatorial.");
	printf("RESPOSTA: ");
	scanf("%d", &numero);

	fatorial = 1;
	while(numero>1){
        fatorial = fatorial*numero;
        numero--;
	}

    printf("%d", fatorial);

	return 0;
}
