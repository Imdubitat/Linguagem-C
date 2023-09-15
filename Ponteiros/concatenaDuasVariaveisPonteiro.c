#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int concatenaString(char string1[], char string2[]){
    char *sres;
    int tamanho;
	
    sres = malloc(strlen(string1) + strlen(string2) + 1);
    strcpy(sres, string1);
    strcat(sres, string2);
	
    printf("%s\n", sres);
	
    tamanho = strlen(sres);
	
    free(sres);
    
    return tamanho;
}

int main() {
    char str1[100], str2[100];
    
    printf("Digite uma string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    
    printf("Digite outra string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    int tamanhoConcatenada = concatenaString(str1, str2);
    
    printf("Tamanho da string concatenada: %d\n", tamanhoConcatenada);
    
    return 0;
}
