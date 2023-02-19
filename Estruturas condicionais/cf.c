/***************************************************
Realiza a conversão de uma temperatura de celsius
para farenheint e vice-versa.
****************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius,faren;
	char opcao;

    printf("\nentre com a opcao desejada: ");
    scanf("%c", &opcao);

	if(opcao == 'c'){
		printf("entre com a temperatura em celsius: ");
		scanf("%f", &celsius);

		faren=(celsius*9/5)+32;
		printf("a temperatura em farenheint eh igual a: %f", faren);
	}

	else if(opcao == 'f'){
		printf("entre com a temperatura em farenheint: ");
		scanf("%f", &faren);

		celsius=(faren-32)*5/9;
		printf("a temperatura em graus celsius eh igual a: %f", celsius);
	}

	else{
	printf("opcao invalida");
	}

    return 0;
}
