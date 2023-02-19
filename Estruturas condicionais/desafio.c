/*************************************************************************
Este programa trata-se de um analisador de resultados de um jogo da velha.
Posto que 'X' é um jogador e 'O' é o outro jogador, o programa analisado
o estado final do tabuleiro e retorna qual jogador ganhou ou se houve empate.
AUTORES: Iuri - RA: 2760482221019
		 Rodrigo - RA: 2760482221026
		 
DATA: 06/10/2022
*************************************************************************/
#include<stdio.h>

int main(){
	
	//Declaração das variáveis correspondentes as posições do tabuleiro
	char v1,v2,v3,v4,v5,v6,v7,v8,v9;
	
	//Menu inicial do analisador
	printf("\n                                   |JOGO DA VELHA|");
	printf("\nEste eh um analisador de resultados de um jogo da velha em linguagem C. Segue abaixo um 'mapa' das posicoes do tabuleiro:");
	printf("\nV1-canto superior direito\nV2-superior central\nV3-canto superior direito\nV4-centro-esquerda\nV5-centro\nV6-centro-direita\nV7-inferior esquerda\nV8-inferior central\nV9-inferior direita");
	printf("\n\nConforme a legenda das posicoes no tabuleiro, posto o estado final do tabuleiro com 'X' ou 'O', o programa retorna quem venceu ou se houve empate.");
	printf("\nSe o jogador nao deseja preencher a posicao, entao digite '-'.\n");
	printf("Agora preencha o tabuleiro conforme o 'mapa'\n");
	
	//leitura das variáveis
	scanf(" %c %c %c %c %c %c %c %c %c", &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9);
	
	//tabuleiro
	printf("\n %c %c %c", v1, v2, v3);
	printf("\n %c %c %c", v4, v5, v6);
	printf("\n %c %c %c", v7, v8, v9);
	
	//Diagonal esquerda para direita
	if((v1=='X')&&(v5=='X')&&(v9=='X')){
		printf("\n\nX venceu");
	}else if((v1=='O')&&(v5=='O')&&(v9=='O')){
		printf("\n\nO venceu");
	}
	
	//Diagonal direita para esquerda
	else if((v3=='X')&&(v5=='X')&&(v7=='X')){
		printf("\n\nX venceu");
	}else if((v3=='O')&&(v5=='O')&&(v7=='O')){
		printf("\n\nO venceu");
	}
	
	//Horizontal superior
	else if((v1=='X')&&(v2=='X')&&(v3=='X')){
		printf("\n\nX venceu");
	}else if((v1=='O')&&(v2=='O')&&(v3=='O')){
		printf("\n\nO venceu");
	}
	
	//Horizontal central
	else if((v4=='X')&&(v5=='X')&&(v6=='X')){
		printf("\n\nX venceu");
	}else if((v4=='O')&&(v5=='O')&&(v6=='O')){
		printf("\n\nO venceu");
	}
	
	//Horizontal inferior
	else if((v7=='X')&&(v8=='X')&&(v9=='X')){
		printf("\n\nX venceu");
	}else if((v7=='O')&&(v8=='O')&&(v9=='O')){
		printf("\n\nO venceu");
	}
	
	//Vertical esquerda
	else if((v1=='X')&&(v4=='X')&&(v7=='X')){
		printf("\n\nX venceu");
	}else if((v1=='O')&&(v4=='O')&&(v7=='O')){
		printf("\n\nO venceu");
	}
	
	//Vertical central
	else if((v2=='X')&&(v5=='X')&&(v8=='X')){
		printf("\n\nX venceu");
	}else if((v2=='O')&&(v5=='O')&&(v8=='O')){
		printf("\n\nO venceu");
	}
	
	//Vertical esquerda
	else if((v3=='X')&&(v6=='X')&&(v9=='X')){
		printf("\n\nX venceu");
	}else if((v3=='O')&&(v6=='O')&&(v9=='O')){
		printf("\n\nO venceu");
	}

	else{
		printf("\n\nempate");
	}
	return 0;
}