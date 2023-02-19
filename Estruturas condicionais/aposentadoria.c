/***************************************************
Informa se uma pessoa é elegível a aposentadoria.
****************************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

	int idade,contribuicao;
	char sexo;

	printf("| CONSULTA DE APOSENTADORIA INSS |");

	printf("\nSEXO: ");
	scanf("%c", &sexo);

	printf("\nIDADE: ");
	scanf("%d", &idade);

	printf("\nTEMPO DE CONTRIBUICAO: ");
	scanf("%d", &contribuicao);

	if((sexo == 'M') && (idade >= 65) && (contribuicao >= 10)){
		printf("Aposentavel");
	}

	else if((sexo == 'M') && (idade >= 63) && (contribuicao >= 15)){
		printf("Aposentavel");
	}

	else if((sexo == 'F') && (idade >= 63) && (contribuicao >= 10)){
		printf("Aposentavel");
	}

	else if((sexo == 'F') && (idade >= 61) && (contribuicao >= 15)){
		printf("Aposentavel");
	}

	else{
		printf("Nao Aposentavel");
	}

	return 0;
}
