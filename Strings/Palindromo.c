#include <stdio.h>
#include <string.h>

int main() {
    char string[80], stringInv[80];
    int i, j;

    printf("Digite uma string [até 80 caracteres]: ");
    fgets(string, 80, stdin);

    for(i=0;i<strlen(string);i++){
		for(j=strlen(string);j>=0;j--){
			string[i]=stringInv[j];
		}
	}
	
	for(j=0;j<strlen(stringInv);j++){
		printf("%c", stringInv[j]);
	}
	
	return 0;
}
