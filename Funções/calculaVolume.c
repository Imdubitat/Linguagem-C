#include<stdio.h>

void calculaVolume(float raio){
	float volume;
	
	volume = (4.0/3.0)*3.14*(raio*raio*raio);
	
	printf("o volume eh igual a: %.2f metros cubicos", volume);
}

int main(){
	float r;
	
	printf("digite o valor do raio: ");
	scanf("%f", &r);
	
	calculaVolume(r);
	
	return 0;
}
