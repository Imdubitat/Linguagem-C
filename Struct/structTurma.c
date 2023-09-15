#include<stdio.h>
#include<string.h>

struct Pessoa{
    char nome[80];
    int matricula;
    float prova1, prova2, prova3;
};

int main(){
    struct Pessoa aluno[2];
    int i;
    float media, maiorP1, maiorMedia, menorMedia;

    for(i = 0; i < 2; i++){
        printf("\nDigite o nome do aluno: ");
        fgets(aluno[i].nome, 80, stdin);
        aluno[i].nome[strlen(aluno[i].nome)-1] = '\0';

        printf("Digite a matricula: ");
        scanf("%d", &aluno[i].matricula);
        getchar();

        printf("Nota P1: ");
        scanf("%f", &aluno[i].prova1);
        getchar();

        printf("Nota P2: ");
        scanf("%f", &aluno[i].prova2);
        getchar();

        printf("Nota P3: ");
        scanf("%f", &aluno[i].prova3);
        getchar();
    }

    maiorP1 = 0;
    maiorMedia = 0;
    menorMedia = 100;

    for(i = 0; i < 2; i++){
        media = (aluno[i].prova1 + aluno[i].prova2 + aluno[i].prova3) / 3.0;
        printf("\nMedia de %s eh %f: ", aluno[i].nome, media);

        if(media > 6){
            printf("\naprovado");
        } else{
            printf("\nreprovado");
        }

        if(maiorP1 < aluno[i].prova1){
            maiorP1 = aluno[i].prova1;
        }
        if(maiorMedia < (aluno[i].prova1 + aluno[i].prova2 + aluno[i].prova3) / 3.0){
            maiorMedia = (aluno[i].prova1 + aluno[i].prova2 + aluno[i].prova3) / 3.0;
        }
        if(menorMedia > (aluno[i].prova1 + aluno[i].prova2 + aluno[i].prova3) / 3.0){
            menorMedia = (aluno[i].prova1 + aluno[i].prova2 + aluno[i].prova3) / 3.0;
        }
    }

    printf("\nA maior nota de P1 eh: %.2f\n", maiorP1);
    printf("A maior media eh: %.2f\n", maiorMedia);
    printf("A menor media eh: %.2f\n", menorMedia);

    return 0;
}
