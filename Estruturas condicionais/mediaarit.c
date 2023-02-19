/********************************************
Este programa lê duas notas e imprime a media
das duas, além de informar o status do aluno
*********************************************/
#include<stdio.h>

int main()
{
    float n1,n2,media;
	
	printf("entre com uma das notas da dupla: ");
	scanf("%f" ,&n1);
	
	printf("entre com a nota restante: ");
	scanf("%f" ,&n2);
	
	media = (n1+n2)/2;
	
printf("sua media eh igual a: %2f \n", media);

	if (media >= 7)
	{
		printf("Voce esta aprovado");
	}
	
	else if (( media >= 5) && ( media <= 6 ))
	{
		printf("Voce esta em analise");
	}
	
	else 
	{
		printf("Voce esta reprovado");
	}
    return 0;
}
