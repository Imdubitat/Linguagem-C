#include <stdio.h>
#include <string.h>

int main() {
    char string[80], string2[80];
    int i, j,contador;

    printf("Digite uma string [até 80 caracteres]: ");
    fgets(string, 80, stdin);
	
	printf("Digite outra string [até 80 caracteres]: ");
    fgets(string2, 80, stdin);
	
	if(strlen(string)!=strlen(string2)){
		printf("as strings não são anagramas");
	}
	
		contador=0;
		for(i=0;i<strlen(string);i++){
			for(j=strlen(string2);j>=0;j--){
				if(string[i]==string2[j]){
					contador++;
				}
			}
		}
	if(contador==strlen(string)){
		printf("as strings sao anagramas");
	}else{
		printf("as strings não são anagramas");
	}

	return 0;
}
