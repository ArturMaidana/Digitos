#include <stdio.h>

int contDigito(const char *str) {
    int contador = 0;

    while (*str) {
        if (*str == '1') {
            contador++;
        }
        str++;
    }

    return contador;
}

int main() {
    char string[100];

    printf("Digite a string: ");
    scanf("%s", string);

    int qtde = contDigito(string);

    printf("A quantidade de degitos 1 na string eh: %d\n", qtde);

    return 0;
}
