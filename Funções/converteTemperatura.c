#include<stdio.h>

void converteTemp(int opcao){
	float celsius,faren,kelvin;
	
	if(opcao == 1){
		printf("digite uma temperatura em °C: ");
		scanf("%f", &celsius);
	
		faren = (celsius*1.8)+32;
	
		printf("a temperatura em °F eh igual a: %.2f", faren);
	
	}else if(opcao == 2){
		printf("digite uma temperatura em °F: ");
		scanf("%f", &faren);
	
		celsius = ((faren-32)*5)/9;
	
		printf("a temperatura em °C eh igual a: %.2f", celsius);
	
	}else if(opcao == 3){
		printf("digite uma temperatura em K: ");
		scanf("%f", &kelvin);
	
		celsius = kelvin-273.15;
	
		printf("a temperatura em °C eh igual a: %.2f", celsius);
	
	}else if(opcao == 4){
		printf("digite uma temperatura em °C: ");
		scanf("%f", &celsius);
	
		kelvin = celsius+273.15;
	
		printf("a temperatura em K eh igual a: %.2f", kelvin);
	}
}
int main(){
	int opcao;
	
	printf("Deseja realizar qual conversão?");
	printf("\n1-Celsius para Farenheint\n2-Farenheint para Celsius\n3-Kelvin para Celsius\n4-Celsius para Kelvin\n");
	scanf("%d", &opcao);
	
	converteTemp(opcao);
	
	return 0;
}


