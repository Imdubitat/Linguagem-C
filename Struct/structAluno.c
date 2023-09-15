#include<stdio.h>
#include<string.h>

struct Aluno{
	char nome[80];
	float nota;
};

int main(){
	struct Aluno turma[5];
	int i;
	float media=0;
	
	for(i=0;i<5;i++){
		printf("digite o nome: ");
		fgets(turma[i].nome,80,stdin);
		turma[i].nome[strlen(turma[i].nome)-1]='\0';
		printf("Digite a nota: ");
		scanf("%f", &turma[i].nota);
		getchar();
	}
	
	for(i=0; i<5;i++){
		media = media+turma[i].nota;
	}
	
	printf("Media da turma = %.2f\n", media/5.0);
}
