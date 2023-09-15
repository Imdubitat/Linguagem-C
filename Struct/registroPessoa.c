#include<stdio.h>
#include<string.h>

struct Pessoa{
	char nome[80];
	int idade;
	char endereco[100];
};

int main(){
	struct Pessoa individuo[2];
	int i;
	
	for(i=0;i<2;i++){
		printf("Digite o nome da pessoa: ");
		fgets(individuo[i].nome, 80, stdin);
		
		individuo[i].nome[strlen(individuo[i].nome)-1]='\0';
		
		printf("Digite a idade: ");
		scanf("%d", &individuo[i].idade);
		getchar();
		
		printf("Digite o endereco da pessoa: ");
		fgets(individuo[i].endereco, 100, stdin);
	}
	
	for(i = 0; i < 2; i++){
        printf("\nInformacoes da pessoa %d:\n", i+1);
        printf("Nome: %s\n", individuo[i].nome);
        printf("Idade: %d\n", individuo[i].idade);
        printf("Endereco: %s\n", individuo[i].endereco);
    }
		
	return 0;
}
