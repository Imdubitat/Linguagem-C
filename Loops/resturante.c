/******************************************************
imprime um menu de restaurante a retorna o prato
desejado pelo usuário.
Autor: Rodrigo Oliveira Feitosa
ADS 2022.2 - 1°semestre
******************************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

	int opcao;

    while(opcao < 5){
        printf("\n\nMENU");
        printf("\n1 - LASANHA\n2 - FRANGO E ARROZ\n3 - PIZZA\n4 - SALADA\n5 - SAIR");

        printf("\n\nOPCAO: ");
        scanf("%d", &opcao);

            if(opcao == 1){
                printf("\nLASANHA");
            }else if(opcao == 2){
                printf("\nFRANGO E ARROZ");
            }else if(opcao == 3){
                printf("\nPIZZA");
            }else if(opcao == 4){
                printf("\nSALADA");
            }
    }
     printf("\nPEDIDO ENCERRADO");
	return 0;
}
