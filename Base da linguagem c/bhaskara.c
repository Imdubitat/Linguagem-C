/********************************************
Este programa calcula as raizes de uma equação
do segundo grau
*********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    float a,b,c,delta,raizum,raizdois,raizdelta;

    printf("coeficiente angular: ");
    scanf("%f", &a);

    printf("coeficiente linear: ");
    scanf("%f", &b);

    printf("termo independente: ");
    scanf("%f", &c);

    delta = pow(b, 2)-4*a*c;
    raizdelta = sqrt(delta);
    raizum = (-b-raizdelta)/2*a;
    raizdois = (-b+raizdelta)/2*a;
    
    printf("%.2f", delta);
    printf("\n%.2f", raizdelta);
    printf("\n%.2f", raizum);
    printf("\n%.2f", raizdois);

    return 0;
}





