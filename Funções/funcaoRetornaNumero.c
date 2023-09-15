#include <stdio.h>

void retornaNumero(int num) {
    printf("O número digitado é: %d\n", num);
}

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    retornaNumero(n);

    return 0;
}
