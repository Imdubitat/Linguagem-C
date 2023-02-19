/********************************************
Este programa calcula a média aritmética
entre dois alunos e diz a partir dessa
se a nota os aprovou, os reprovou ou
os deixou em análise
Victor e Rodrigo 30/07/2017
*********************************************/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float n1,n2,soma,sub,div,mult;
    char operacao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);

    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    printf("selecione uma operação: \n1-soma\n2-subtracao\n3-multiplicacao\n4-divisao");
    scanf("%s", &operacao);
    
    soma=n1+n2;
    sub=n1-n2;
    div=n1/n2;
    mult=n1*n2;

    if(operacao == '1') {
        printf("%2f", soma);
    }
    else if(operacao == '2'){
        printf("%2f", sub);
    }
    else if(operacao == '3') {
        printf("%2f", mult);
    }
    else if(operacao == '4') {
        printf("%2f", div);
    }
    else {
        printf("operacao inválida!");
    }
    return 0;
}





    