/***************************************************
Informa entre duas datas, qual é a mais recente.
****************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int dia1,mes1,ano1,dia2,mes2,ano2;

    printf("digite o dia, mes e ano da primeira data");
	printf("\ndia: ");
	scanf("%d", &dia1);
	printf("\nmes: ");
	scanf("%d", &mes1);
	printf("\nano: ");
	scanf("%d", &ano1);

    printf("digite o dia, mes e ano da segunda data");
	printf("\ndia: ");
	scanf("%d", &dia2);
	printf("\nmes: ");
	scanf("%d", &mes2);
	printf("\nano: ");
	scanf("%d", &ano2);


        if(ano1>ano2){
			printf("a data mais recente eh: %d/%d/%d", dia1, mes1, ano1);
        }

        else if(ano2>ano1){
            printf("a data mais recente eh: %d/%d/%d", dia2, mes2, ano2);
        }

        else if((ano1==ano2)&&(mes1>mes2)){
            printf("a data mais recente eh: %d/%d/%d", dia1, mes1, ano1);
        }

		else if((ano1==ano2)&&(mes2>mes1)){
			printf("a data mais recente eh: %d/%d/%d", dia2, mes2, ano2);
		}

		else if((ano1==ano2)&&(mes1==mes2)&&(dia1>dia2)){
            printf("a data mais recente eh: %d/%d/%d", dia1, mes1, ano1);
        }

		else if((ano1==ano2)&&(mes2>mes1)&&(dia2>dia1)){
			printf("a data mais recente eh: %d/%d/%d", dia2, mes2, ano2);
		}


    return 0;
}
