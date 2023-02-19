/***************************************************
Informa a ordem crescente de 3 numeros digitados pelo
usuário.
****************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3;

    printf("\ndigite o valor de n1: ");
    scanf("%f", &n1);

	printf("\ndigite o valor de n2: ");
    scanf("%f", &n2);

	printf("\ndigite o valor de n3: ");
    scanf("%f", &n3);

	if(n1<=n2 && n2<=n3){
		printf("a ordem crescente eh %.2f, %.2f, %.2f: ", n1,n2,n3);
	}

	else if(n2<=n1 && n1<=n3){
		printf("a ordem crescente eh %.2f, %.2f, %.2f: ", n2,n1,n3);
	}

	else if(n2<=n3 && n3<=n1){
		printf("a ordem crescente eh %.2f, %.2f, %.2f: ", n2,n3,n1);
	}

	else if(n3<=n1 && n1<=n2){
		printf("a ordem crescente eh %.2f, %.2f, %.2f: ", n3,n1,n2);
	}

	else if(n1<=n3 && n3<=n2){
		printf("a ordem crescente eh %.2f, %.2f, %.2f: ", n1,n3,n2);
	}

	else if(n3<=n2 && n2<=n1){
		printf("a ordem crescente eh %.2f, %.2f, %.2f: ", n3,n2,n1);
	}

	else if(n1=n2=n3){
		printf("todos os numeros sao iguais!");
    return 0;
	}
}
