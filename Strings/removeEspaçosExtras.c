#include <stdio.h>
#include <string.h>

int main() {
    char string[80], string2[80];
    int i, j=0;

    printf("Digite uma string [até 80 caracteres]: ");
    fgets(string, 80, stdin);

    printf("\n\nString original: ");
    for (i = 0; i < strlen(string); i++) {
        printf("%c", string[i]);
    }

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == ' ' && string[i + 1] == ' ') {
            continue;
        }
        string2[j] = string[i];
        j++;
    }
    string2[j] = '\0';

    printf("\n\nString sem espaços extras: %s\n", string2);

    return 0;
}
