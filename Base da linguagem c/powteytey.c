/***************************************************
Calcula uma expressão matemática.
****************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,funcao;

    printf("calculo: f(x)=sqrt(x)+(x/2)+x^x");

    printf("\ndigite o valor de x: ");
    scanf("%f", &x);

    funcao=((sqrt(x))+(x/2)+(pow(x, x)));

    printf("%f", funcao);

    return 0;
}
