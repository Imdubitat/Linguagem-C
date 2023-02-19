/********************************************
Este programa lê um valor e imprime todos o numeros
entre este numero e zero
*********************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

int aux,i;

printf("digite um valor: ");
scanf("%d", &aux);

for(i=0;i<aux;i++){
    printf("%d\n", i);
}

return 0;
}
