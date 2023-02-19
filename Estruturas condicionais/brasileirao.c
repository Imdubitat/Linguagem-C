/***************************************************
Informa, entre dois times, quem ficará na fernte na
classificação do campeonato brasileiro.
****************************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vitoria,saldo,gols,vermelho,amarelo,vitoria2,saldo2,gols2,vermelho2,amarelo2;

	printf("CRITERIO DE DESEMPATE - BRASILEIRAO");

	printf("\nTIME 1");
	printf("\ndigite o numero de vitorias: ");
	scanf("%d", &vitoria);
	printf("\ndigite o saldo de gols: ");
	scanf("%d", &saldo);
	printf("\ndigite o numero de gols marcados: ");
	scanf("%d", &gols);
	printf("\ndigite o numero de cartoes vermelhos: ");
	scanf("%d", &vermelho);
	printf("\ndigite o numero de cartoes amarelos: ");
	scanf("%d", &amarelo);

	printf("\nTIME 2");
	printf("\ndigite o numero de vitorias: ");
	scanf("%d", &vitoria2);
	printf("\ndigite o saldo de gols: ");
	scanf("%d", &saldo2);
	printf("\ndigite o numero de gols marcados: ");
	scanf("%d", &gols2);
	printf("\ndigite o numero de cartoes vermelhos: ");
	scanf("%d", &vermelho2);
	printf("\ndigite o numero de cartoes amarelos: ");
	scanf("%d", &amarelo2);

	if(vitoria > vitoria2){
		printf("o time que vence nos criterios eh o TIME 1");
	} else if(vitoria < vitoria2){
		printf("o time que vence nos criterios eh o TIME 2");
	}

	if((vitoria == vitoria2)&&(saldo>saldo2)){
		printf("o time que vence nos criterios eh o TIME 1");
	} else if((vitoria == vitoria2)&&(saldo<saldo2)){
		printf("o time que vence nos criterios eh o TIME 2");
	}

	if((vitoria == vitoria2)&&(saldo == saldo2)&&(gols>gols2)){
		printf("o time que vence nos criterios eh o TIME 1");
	} else if((vitoria == vitoria2)&&(saldo == saldo2)&&(gols<gols2)){
		printf("o time que vence nos criterios eh o TIME 2");
	}

	if((vitoria == vitoria2)&&(saldo>saldo2)&&(gols == gols2)&&(vermelho<vermelho2)){
		printf("o time que vence nos criterios eh o TIME 1");
	} else if((vitoria == vitoria2)&&(saldo>saldo2)&&(gols == gols2)&&(vermelho>vermelho2)){
		printf("o time que vence nos criterios eh o TIME 2");
	}

	if((vitoria == vitoria2)&&(saldo>saldo2)&&(gols == gols2)&&(vermelho == vermelho2)&&(amarelo<amarelo2)){
		printf("o time que vence nos criterios eh o TIME 1");
	} else if((vitoria == vitoria2)&&(saldo>saldo2)&&(gols == gols2)&&(vermelho == vermelho2)&&(amarelo<amarelo2)){
		printf("o time que vence nos criterios eh o TIME 2");
	}

	return 0;
}
