/***********************************
imprime o valor da potencia definida
pelo usuário.
Autor: Rodrigo Oliveira Feitosa
ADS 2022.2 - 1°semestre
************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

	int a,b,resultado,i;
    i=0;

	printf("a = ");
	scanf("%d", &a);

	printf("b = ");
	scanf("%d", &b);

    resultado = 1;

        while(i<b){
            resultado = resultado*a;
            i++;
        }
        printf("%d", resultado);
    return 0;
}


