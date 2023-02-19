/**********************************************
imprime os valores entre 2 e um
determinado limite determinado pelo usuário
Autor: Rodrigo Oliveira Feitosa
ADS 2022.2 - 1° semestre
***********************************************/

#include<stdio.h>
#include<stdlib.h>

int main(){

	int n,divisor,i;

	printf("digite o limite: ");
	scanf("%d", &n);

    i = 2;
    while(i<n){
        i++;
        printf("%d", i);
    }
}


