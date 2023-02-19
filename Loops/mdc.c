#include<stdio.h>
#include<stdlib.h>

int main(){

	int m,n,i,mdc;
	
	printf("m: ");
	scanf("%d", &m);
	
	printf("n: ");
	scanf("%d", &n);
	
	i = m;
	mdc =1;
	while((m>n)&&(n>0)){
		i=m-1;
		if(n==0){
			printf("MDC = %d", n);
		}
	
		if((m%i==0)&&(n%i==0)){
			mdc=1;
		}
}
	if(mdc){
		printf("MDC = %d", i);
	}
}
