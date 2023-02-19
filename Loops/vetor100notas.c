#include <stdio.h>
#include <stdlib.h>

int main()
{
 float nota[100];
 int n, i;

 printf("numero de alunos: ");
 scanf("%f", &n);

 if(n>100){
    n=100;
    printf("\nNumero maximo de alunos alterdo para 100");
 }

 for(i = 0; i < n; i++){
    printf("\ndigite a nota do aluno %d: ", i);
    scanf("%f", &nota [i]);
 }
}
