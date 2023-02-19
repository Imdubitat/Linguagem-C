/***************************************************
****************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;

    printf("\ndigite o valor de n1: ");
    scanf("%d", &n1);

	if((n1%2==0) && (n1<100)){
		printf("este numero eh par e menor que cem");
	}

	else if((n1%2==0) && (n1>=100)){
		printf("este numero eh par e maior ou igual a cem");
	}

	else if((n1%2==0) && (n1<100)){
		printf("este numero eh par e menor que cem");
	}

	else if((n1%2!=0) && (n1>=100)){
		printf("este numero eh impar e maior ou igual a cem");
	}

    return 0;
	}
