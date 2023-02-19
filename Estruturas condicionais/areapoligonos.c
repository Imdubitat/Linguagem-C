/********************************************
Este programa calcula a area de 5 tipos de polígonos
*********************************************/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int poligono;
    float lado,base,altura,apotema,area;
    
    printf("CALCULO DA AREA DE POLIGONOS");
    printf("\nOpcoes: ");
    printf("\n1- triangulo\n2- quadrado\n3- pentagono\n4- hexagono\n5- heptagono");  
    
    printf("\nselecione um poligono: ");
    scanf("%d", &poligono);
    
    
    if(poligono == 1){
        printf("\nindique a medida da base: ");
        scanf("%f", &base);
        printf("\nindique a medida da altura: ");
        scanf("%f", &altura);
        
        area = (base*altura)/2;
        
       printf("a area eh igual a: %.2f", area);
    }
    
    else if(poligono == 2){
        printf("\nindique a medida dos lados: ");
        scanf("%f", &lado);;
        area = pow(lado, 2);
        
        printf("A area eh igual a: %.2f", area);
    }
    
    else if(poligono == 3){
        printf("escreva a medida dos lados: ");!
        scanf("%f", &lado);
        printf("escreva o valor da apotema:");
        scanf("%f", &apotema);
        
        area = 5*lado*apotema;
        printf("A area eh igual a: %.2f", area);
    }
    else if(poligono == 4){
        printf("escreva a medida da altura: ");
        scanf("%f", altura);     
        printf("entre com a medida da base");
        scanf("%f", base);
        
        area = 6*((base*altura)/2);
        printf("A area eh igual a: %.2f", area);   
     }
  return 0;
}
	




    
