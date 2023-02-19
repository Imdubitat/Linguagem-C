/***************************************************
Informa se um ano é bissexto ou não.
****************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    printf("\ndigite o valor do ano desejado: ");
    scanf("%d", &ano);


	if(((ano%4==0)&&(ano%100!=0))||(ano%400==0)){
		printf("este ano eh bissexto");
	}

	else{
		printf("este ano nao eh bissexto");
	}
    return 0;
}
