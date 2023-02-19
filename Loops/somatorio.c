/********************************************
este programa realiza o somatório em ordem cresente
de 0+1, 1+2, 3+3, 6+4 até o limite digitado pelo usuário.
*********************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, aux;
    int soma = 0;

    printf("digite um valor: ");
    scanf("%d", &aux);

    for(i=1; i<=aux; i++){
        soma = soma + i;
        printf("%d\n", soma);
    }

    return 0;
}
