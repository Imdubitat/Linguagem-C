/********************************************
este programa imprime a soma dos 4 menores numeros digitados
*********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	float n1,n2,n3,n4,n5,soma;

printf("digite o primeiro numero: ");
scanf("%f", &n1);

printf("\ndigite o segundo numero: ");
scanf("%f", &n2);

printf("\ndigite o terceiro numero: ");
scanf("%f", &n3);

printf("\ndigite o quarto numero: ");
scanf("%f", &n4);

printf("\ndigite o quinto numero: ");
scanf("%f", &n5);

if((n1 && n2 && n3 && n4)<n5){
soma=n1+n2+n3+n4;
printf("%f", soma);
}
else if((n1 && n2 && n3 && n5)<n4){
soma=n1+n2+n3+n5;
printf("%f", soma);
}
else if((n1 && n2 && n4 && n5)<n3){
soma=n1+n2+n4+n5;
printf("%f", soma);
}
else if((n1 && n3 && n4 && n5)<n2){
soma=n1+n3+n4+n5;
printf("%f", soma);
}
else if((n2 && n3 && n4 && n5)<n1){
soma=n2+n3+n4+n5;
printf("%f", soma);
}
	return 0;
}
	




