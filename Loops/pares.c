/********************************************
Este programa imprime a quantidade de numeros pares
solicitada pelo usuário a partir de zero
*********************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int aux,i,par;

    printf("quantos numeros pares voce quer imprimir?\n");
    scanf("%d", &aux);

    i=0;
    par=0;

    do{
        i++;
        par = par+2;
        printf("%d\n", par);
    }while(i<aux);

    return 0;
}
