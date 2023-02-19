/***************************************************
Informa a comissão de acordo com o valor da transação
bancária realizada.
****************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float transacao,comissao;

    printf("\ndigite o valor da transacao: ");
    scanf("%f", &transacao);


	if(transacao<=2500){
		comissao = (transacao*0.017)+30;

		if(comissao<=39){
		printf("a comissão eh de: R$ 39");
		} else if(comissao>39){
		printf("a comissão eh de: %f", comissao);
		}
	}

	else if(transacao<=6250){
		comissao = (transacao*0.0066)+56;
		printf("a comissão eh de: %f", comissao);
	}

	else if(transacao<=20000){
		comissao = (transacao*0.0034)+76;
		printf("a comissão eh de: %f", comissao);
	}

	else if(transacao<=50000){
		comissao = (transacao*0.0022)+100;
		printf("a comissão eh de: ", comissao);
	}

	else if(transacao<=500000){
		comissao = (transacao*0.0011)+155;
		printf("a comissão eh de: %f", comissao);
	}
	else if(transacao>500000){
		comissao = (transacao*0.0009)+255;
		printf("a comissão eh de:%f", comissao);
	}
    return 0;
	}

