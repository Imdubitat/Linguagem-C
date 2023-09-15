#include <stdio.h>

int main() {
    int numero;
    float real;
    char caractere;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    printf("Digite um número real: ");
    scanf("%f", &real);
    
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    
    int *ponteiroNumero = &numero;
    float *ponteiroReal = &real;
    char *ponteiroCaractere = &caractere;
    
    printf("\nValores originais:\n");
    printf("Número: %d\n", numero);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);
    
    printf("\nDigite o novo valor do número inteiro: ");
    scanf("%d", ponteiroNumero);
    
    printf("Digite o novo valor do número real: ");
    scanf("%f", ponteiroReal);
    
    printf("Digite o novo valor do caractere: ");
    scanf(" %c", ponteiroCaractere);
    
    printf("\nValores modificados:\n");
    printf("Número: %d\n", numero);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);
    
    return 0;
}
