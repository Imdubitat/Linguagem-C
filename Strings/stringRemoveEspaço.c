#include<stdio.h>
#include<string.h>

int main(){
	char string[80],string2[80];
	int i,j=0;
	
	printf("Digite uma string [até 80 caracteres]: ");
	fgets(string,80,stdin);
	
	printf("\n\nString original: ");
	for(i=0;i<strlen(string);i++){
		printf("%c", string[i]);
	}
	
	printf("\n\nString sem espacos: ");
	for(i=0;i<strlen(string);i++){
		if(string[i]!=' '){
			string2[j] = string[i];
			j++;
		}
	}
	
	string2[j] = '\0';
	for(i=0;i<strlen(string2);i++){
		printf("%c", string2[i]);
	}
	
	return 0;
}
