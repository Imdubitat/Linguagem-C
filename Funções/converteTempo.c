#include<stdio.h>

void converteSegundos(int horas, int minutos, int segundos){
	int tempo;
	
	tempo=(horas*3600)+(minutos*60)+segundos;
	
	printf("%d", tempo);
}

int main(){
	int h,m,s;
	
	printf("digite uma hora: ");
	scanf("%d",&h);
	
	printf("digite os minutos: ");
	scanf("%d",&m);
	
	printf("digite os segundos: ");
	scanf("%d",&s);
	
	converteSegundos(h,m,s);
	
	return 0;
}
