/********************************************
este programa informa se o valor digitado eh 
divisível por 3 e 5, simultaneamente.
*********************************************/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero;

    printf("digite o numero desejado: ");
    scanf("%d", &numero);

    if((numero%5)==0 && (numero%3)==0) {
        printf("o numero digitado é divisivel tanto por 3 quanto por 5");
    }
    else {
        printf("o numero digitado nao se enquadra nas condicoes predefinidas");
    }
    return 0;
}





