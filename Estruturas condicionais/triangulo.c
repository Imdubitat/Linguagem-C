/***************************************************
Este programa informa o tipo de triângulo, de acordo
com o valor dos lados digitados.
****************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,s,area;

    printf("\ndigite o valor de a: ");
    scanf("%f", &a);

	printf("\ndigite o valor de b: ");
    scanf("%f", &b);

	printf("\ndigite o valor de c: ");
    scanf("%f", &c);

        if(a!=b && b!=c && a!=c){
		printf("este triangulo eh escaleno");
        }

        else if((a==b) && (b==c)){
            printf("este triangulo eh equilatero");
        }

        else if(a==b || a==c || b==c){
            printf("este triangulo eh isosceles");
        }

        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("\na area do triangulo eh igual a %f: ", area);

    return 0;
}
