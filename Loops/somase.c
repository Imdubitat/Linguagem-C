/********************************************
este programa imprime a soma dos numeros digitados.
se o valor zero for digitado, a soma dos numeros anteriores eh realizada.
*********************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int aux,i;

    printf("Digite os valores: ");
    printf("\nQuando terminar de digitar, digite 0\n");

	do{
		scanf("%d", &aux);
		i = i + aux;

	}while(aux!=0);

	printf("\nresultado: %d", i);

    return 0;
}
