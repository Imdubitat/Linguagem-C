#include<stdio.h>
#include<string.h>

struct Pessoa{
	char nome[80];
	int matricula;
	char curso[100];
};

int main(){
	struct Pessoa aluno[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("\nDigite o nome do aluno: ");
		fgets(aluno[i].nome, 80, stdin);
		aluno[i].nome[strlen(aluno[i].nome)-1]='\0';
		
		printf("Digite a matricula: ");
		scanf("%d", &aluno[i].matricula);
		getchar();
		
		printf("Digite o curso do aluno: ");
		fgets(aluno[i].curso, 100, stdin);
		aluno[i].curso[strlen(aluno[i].curso)-1] = '\0';
	}
	
	for(i = 0; i < 5; i++){
        printf("\nInformacoes da pessoa %d:\n", i+1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Endereco: %s\n", aluno[i].curso);
    }
		
	return 0;
}
