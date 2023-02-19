#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x,y;

printf("entre com o valor de x: ");
scanf("%d", &x);

if(x<1){
y=x;
printf("o valor de y eh igual a: %d", y);
}
else if(x==1){
y=x-1;
printf("o valor de y eh igual a: %d", y);
}
else if(x>1){
y=pow(x, 2);
printf("o valor de y eh igual a: %d", y);
}
	return 0;
}
	




