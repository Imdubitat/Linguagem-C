/*imprime a soma de todos os valores digitados.
Autor: Rodrigo Oliveira Feitosa
ADS 2022.2 - 1°semestre*/
#include<stdio.h>
#include<stdlib.h>

int main(){

	int acumuladora, numero;


	printf("digite os numeros!");
	printf("\nQuando desejar encerrar a soma dos numeros digite '0'");



	while(numero != 0){
        printf("\nRESPOSTA: ");
        scanf("%d", &numero);
		acumuladora = acumuladora+numero;
	}
    printf("%d", acumuladora);

	return 0;
}
