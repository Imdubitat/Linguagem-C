#include<stdio.h>
#include<string.h>

int main(){
	char string[80];
	int i;
	
	printf("Digite uma string [até 80 caracteres]: ");
	fgets(string,80,stdin);
	
	printf("\n\nString original: ");
	for(i=0;i<strlen(string);i++){
		printf("%c", string[i]);
	}
	
	printf("\n\nString inversa: ");
	for(i=strlen(string);i>=0;i--){
		printf("%c", string[i]);
	}
	
	return 0;
}
